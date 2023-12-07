#include<bits/stdc++.h>
using namespace std;

int t, a, b, n, m;

int main() {
  cin >> t;
  while (t--) {
    cin >> a >> b >> n >> m;
    int x = n / m;
    int y = n % m;
    int cost = x * a + (n - x * m) * b;
    cout << min(cost, n * a) << endl;
  }
  return 0;
}
