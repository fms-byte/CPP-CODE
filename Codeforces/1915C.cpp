#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    double ans = sqrt(sum);

    if (ceil(ans) == floor(ans)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}