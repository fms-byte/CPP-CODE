#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef vector<long long> vlli;
typedef pair<int, int> pi;
typedef vector<pi> vpair;
#define Carry_on_FARHAN ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define newline cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define Rev(v) reverse(v.begin(),v.end())
#define show(n) cout << n << endl
#define show2(n,m) cout << n <<" "<<m<<endl
#define show3(n,m,p) cout << n <<" "<<m<<" "<<p<<endl
#define show4(n,m,p,o) cout << n <<" "<<m<<" "<<p<<" "<<o<<endl
#define YES show("YES")
#define NO show("NO")
#define loop(i,a,b) for(ll i = a; i < b; i++)
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

// vector<ll> primeFactors(ll n) {
// 	vector<ll> factors;
// 	set<int> st;
// 	while (n % 2 == 0) {
// 		st.insert(2);
// 		//factors.pb(2);
// 		n = n / 2;
// 	}

// 	for (int i = 3; i <= sqrt(n); i = i + 2) {
// 		while (n % i == 0) {
// 			//factors.pb(i);
// 			st.insert(i);
// 			n = n / i;
// 		}
// 	}
// 	if (n > 2) st.insert(n);

// 	for (auto i : st) {
// 		factors.pb(i);
// 	}
// 	return factors;
// }


void solve() {
	ll n, f, a, b;
	cin >> n >> f >> a >> b;
	vector <ll> v(n);
	loop(i, 0, n) cin >> v[i];
	ll pre = 0, mini;
	loop(i, 0, n) {
		mini = min(b, abs(v[i] - pre) * a);
		f -= mini;
		pre = v[i];
	}
	if (f > 0)
		YES;
	else
		NO;
}

int main()
{
	Carry_on_FARHAN;
	ll t = 1;
	cin >> t;
	for (ll i = 1; i <= t; i++) {
		//cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}

