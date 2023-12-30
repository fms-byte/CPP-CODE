#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  map<ll, ll> mp;
  mp[0] = 1;
  ll sum = 0;

  for (int i = 0; i < n; i++) {
    a[i] *= ((i % 2) ? -1 : 1);
    sum += a[i];
    if (mp[sum]) {
      cout << "YES\n";
      return;
    }
    mp[sum]++;
  }
  cout << "NO\n";
}

int main() {
  //Solution findSolution;
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}