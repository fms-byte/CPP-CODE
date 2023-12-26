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
typedef vector<pi> vpair;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define arr_sort(a) sort(a, a+n);
#define vec_sort(v) sort(v.begin(),v.end());
#define Rev(v) reverse(v.begin(),v.end());
#define show(n) cout << n << endl;
#define show2(n,m) cout << n <<" "<<m<<endl;
#define show3(n,m,p) cout << n <<" "<<m<<" "<<p<<endl;
#define show4(n,m,p,o) cout << n <<" "<<m<<" "<<p<<" "<<o<<endl;
#define yes show("YES");
#define no show("NO");
#define loop(a,b) for(ll i = a; i < b; i++)
const ll mod = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;
ll mul_inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * mul_inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a * b) / gcd(a, b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = (res * a) % mod; a = (a * a ) % mod; b >>= 1;} return res;}


void solve() {
	ll n, x;
	cin >> n >> x;
	vector<ll> a(n), p(n);
	loop(0, n) cin >> a[i];
	loop(0, n) cin >> p[i];
	vector<pair<ll, ll>> ap;
	loop(0, n) ap.pb(mp(p[i], a[i]));
	vec_sort(ap);

	ll ans = 0, sz = n, minimum = ap[0].first;
	if (x < minimum) {
		show(n * x);
		return;
	}
	ans += x;
	sz--;
	loop(0, n) {
		ans += min(x * min((ap[i].se), sz), (ap[i].fi) * min((ap[i].se), sz));
		sz -= ap[i].se;
		if (sz <= 0) break;
	}
	show(ans);
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

