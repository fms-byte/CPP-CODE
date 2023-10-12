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
const int N = 1e5 + 10;
const ll MOD = LLONG_MAX;

typedef vector<int> vi;
typedef pair<int, int> pi;
/*
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

void primeFactors(int n)
{
	int i = 2;
	int cnt = 0;
	while (n > 1)
	{
		if (n % i == 0) {
			cout << i << " ";
			n /= i;
		}
		else
			i++;
	}
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

ll exponent(int x, int y) {
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

int is_power_of_2(int n) {
	if ((n & (n + 1)) == 0) {
		return true;
	}
	else
		return false;
}

void xor(){
	//Given an integer N, Chef wants to find the smallest positive integer M such that the bitwise XOR of M and M+1 is N. If no such M exists output -1.
	if (n == 1) {
		cout << "2" << endl;
	}
	else {
		if (is_power_of_2(n))
			cout << (n >> 1) << endl;
		else
			cout << -1 << endl;
	}
}*/

void solve()
{
	ll y, x;
	cin >> y >> x;
	ll n = max(y, x);
	ll a[n + 1][n + 1];
	ll ans = 0;
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= n; j++) {
			if (i >= j)
			{
				if (i & 1)
				{
					ans = ((i - 1) * (i - 1)) % MOD;
					ans = ans + j;
					a[i][j] = ans;

				} else {
					ans = (i * i) % MOD;
					ans = ans - j + 1;
					a[i][j] = ans;
				}
			}
			else {
				if (j & 1)
				{
					ans = (j * j) % MOD;
					ans = ans - i + 1;
					a[i][j] = ans;
				} else {
					ans = ((j - 1) * (j - 1)) % MOD;
					ans = ans + i;
					a[i][j] = ans;
				}
			}
		}
	}

	for (ll i = 1; i < n + 1; ++i)
	{
		for (ll j = 1; j < n + 1; ++j)
		{
			cout  << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "a[" << y << "][" << x << "] = " << a[y][x] << endl;
}
int main()
{
	GET_FASTER;
	ll t = 1;
	cin >> t;
	for (ll i = 1; i <= t; i++) {
		//cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}
