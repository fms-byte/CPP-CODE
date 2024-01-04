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


/*
vector<ll> primeFactors(ll n) { //prime factorization unique primes
	vector<ll> factors;
	set<int> st;
	while (n % 2 == 0) {
		st.insert(2);
		//factors.pb(2);
		n = n / 2;
	}

	for (int i = 3; i <= sqrt(n); i = i + 2) {
		while (n % i == 0) {
			//factors.pb(i);
			st.insert(i);
			n = n / i;
		}
	}
	if (n > 2) st.insert(n);

	for (auto i : st) {
		factors.pb(i);
	}
	return factors;
}


int dp[N][7];

void Sieve(int n)//prime numbers from 0 to n
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	int cnt = 0;
	for (int p = 2; p <= n; p++) {
		if (prime[p]) {
			cout << p << " ";
			cnt++;
		}
	}
//cout << cnt << " Prime Nmbers in range 0 to " << n << endl;
}

void divisors(int n) //(divisors of n)
{
	int cnt = 2;
	cout << 1 << " ";
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << i << " ";
			cnt++;
		}
	}
	cout << n << endl;
	cout << cnt << endl;
}

vector<ll> all_divisor(ll n, ll l) { // (better soln)
	vector<ll> divisors;
	if (l < 2)
		divisors.pb(1);

	for (ll i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			if (i > l) {
				divisors.pb(i);
			}
			ll j = n / i;
			if (j != i) {
				if (j > l)
					divisors.pb(j);
			}
		}
	}

	divisors.pb(n);
	return divisors;
}

bool is_prime(int n) {
	bool prime = true;
	if (n == 0 || n == 1) {
		prime = false;
	}

	for (int i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			prime = false;
			break;
		}
	}
	return prime;
}

ll exponent(int x, int y) {//to find exponent
	ll ans = 1;
	ll res = x;
	while (y) {
		if (y & 1) {
			ans *= res;
		}
		res *= res;
		y /= 2;
	}
	return ans;
}

ll binpow(ll a, ll b) {//to find exponent faster (need to check)
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

int is_power_of_2(int n) {
	if ((n & (n + 1)) == 0) {
		return true;
	}
	else
		return false;
}

void Xor(int n) {//XOR of n, n+1
	if (n == 1) {
		cout << "2" << endl;
	}
	else {
		if (is_power_of_2(n))
			cout << (n >> 1) << endl;
		else
			cout << -1 << endl;
	}
}
int DP(int n, int last) {
	if (n < 0)
		return 0;
	if (dp[n][last] != 0)
		return dp[n][last];
	ll val = 0;
	for (int i = 1; i <= last; ++i) {
		val += DP(n - last, i);
		val %= MOD;
	}
	dp[n][last] = val;
}



void permute(string& a, int l, int r, set<string>& uniquePermutations) {
	if (l == r) {
		uniquePermutations.insert(a);
	}
	else {
		for (int i = l; i <= r; i++) {
			swap(a[l], a[i]);
			permute(a, l + 1, r, uniquePermutations);
			swap(a[l], a[i]);
		}
	}
}

void setOfPermute(string& s, int n) {
	set<string> uniquePermutations;
	permute(s, 0, n - 1, uniquePermutations);
	cout << uniquePermutations.size() << endl;
	for (const string& permutation : uniquePermutations) {
		cout << permutation << endl;
	}
}
*/


void solve() {

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

