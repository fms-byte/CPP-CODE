//Farhan404
#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
typedef long long int ll;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define ld double
const int N = 1e6 + 5;
const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	ll sum = 0, ans = mx;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum += a[i];
	}
	for (ll i = 0; i < 1 << n; i++) {
		ll s = 0;
		for (ll j = 0; j < n; j++) {
			if (i & 1 << j) s += a[j];
		}
		ll curr = abs((sum - s) - s);
		ans = min(ans, curr);
	}
	cout << ans;

}
int main()
{
	GET_FASTER;
	int t = 1;
	//cin >> t;
	for (ll i = 1; i <= t; i++) {
		//cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}

