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

void solve()
{
	ll n, tot_sum = 0;
	cin >> n;
	tot_sum = n * (n + 1) / 2;
	//cout << tot_sum << endl;
	if (tot_sum & 1)
	{
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;

		ll a[5 + n / 2], b[5 + n / 2], indexA = 0, indexB = 0;

		if (!(n & 1)) { //even
			for (ll i = 1; i <= n / 2; ++i)
			{
				if (i & 1)
				{
					a[indexA] = i;
					indexA++;
				} else {
					b[indexB] = i;
					indexB++;
				}
			}
			for (ll i = 1 + n / 2 ; i <= n; ++i)
			{
				if (!(i & 1))
				{
					a[indexA] = i;
					indexA++;
				} else {
					b[indexB] = i;
					indexB++;
				}
			}
			cout << (n + 1) / 2 << endl;
			for (int i = 0; i < n / 2; ++i)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			cout << n / 2 << endl;
			for (int i = 0; i < n / 2; ++i)
			{
				cout << b[i] << " ";
			}
		}
		else { //odd
			indexA = 1, indexB = 0;
			a[0] = 1;
			ll p = (n + 1) / 2;
			for (ll i = 2; i <= p + 1; ++i)
			{
				if (!(i & 1))
				{
					a[indexA] = i;
					indexA++;
				}
				else {
					b[indexB] = i;
					indexB++;
				}
			}
			for (ll i = p + 2; i <= n ; ++i)
			{
				if ((i & 1))
				{
					a[indexA] = i;
					indexA++;
				}
				else {
					b[indexB] = i;
					indexB++;
				}
			}
			cout << (n + 1) / 2 << endl;
			for (int i = 0; i <= n / 2; ++i)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			cout << n / 2 << endl;
			for (int i = 0; i < n / 2; ++i)
			{
				cout << b[i] << " ";
			}
		}
	}
}
int main()
{
	GET_FASTER;
	ll t = 1;
	//cin >> t;
	for (ll i = 1; i <= t; i++) {
		//cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}
