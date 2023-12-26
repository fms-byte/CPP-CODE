#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER 		ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl 			'\n'
#define nline 			cout<<'\n'
typedef long long int ll;
typedef double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef vector<long long> vlli;
typedef pair<int, int> pi;
#define fi 				first
#define se 				second
#define pb 				push_back
#define mp 				make_pair
#define all(x) 			begin(x), end(x)
#define arr_sort(a) 	sort(a, a+n);
#define vec_sort(v) 	sort(v.begin(),v.end());
#define Rev(v) 			reverse(v.begin(),v.end());
#define show(n) 		cout << n << endl;
#define show2(n,m)		cout << n <<" "<<m<<endl;
#define yes 			show("YES");
#define no 				show("NO");
#define loop(i,n)      	for (int i = 0; i < n; i++)
#define forr(i,a,b)    	for(ll i=a;i<=b;i++)
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
	string a, b;
	cin >> a >> b;
	bool isFine = false;
	int n = a.size();
	int x, y, z;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1') {
			isFine = true;
		}
	}
	if (isFine) { yes; }
	else { no; }
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

