#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define nline cout<<'\n'
typedef long long int ll;
typedef double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef vector<long long> vlli;
typedef pair<int, int> pi;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define arr_sort(a) sort(a, a+n);
#define vec_sort(v) sort(v.begin(),v.end());
#define Rev(v) reverse(v.begin(),v.end());
#define show(n) cout << n << endl;

const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;

// vector<ll> all_divisor(ll n, ll l) {
// 	vector<ll> divisors;
// 	if (l < 2)
// 		divisors.pb(1);

// 	for (ll i = 2; i * i <= n; i++) {
// 		if (n % i == 0) {
// 			if (i > l) {
// 				divisors.pb(i);
// 			}
// 			ll j = n / i;
// 			if (j != i) {
// 				if (j > l)
// 					divisors.pb(j);
// 			}
// 		}
// 	}

// 	divisors.pb(n);
// 	return divisors;
// }

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	ll cnt = 0;

	unordered_set<char> substrings;

	for (auto i : s) {
		substrings.insert(i);
		cnt += substrings.size();
	}

	cout << cnt << endl;
}

int main()
{
	GET_FASTER;
	ll t = 1;
	cin >> t;
	for (ll i = 1; i <= t; i++) {
		//cout << "Case " << i << ":";
		solve();
	}
	return 0;
}

