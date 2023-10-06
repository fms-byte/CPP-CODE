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
	ll n, allPossibleCombination, attackingCombination;
	cin >> n;
	for (ll i = 1; i <= n; ++i)
	{
		allPossibleCombination = (i * i) * (i * i - 1) / 2;
		attackingCombination = 4 * (i - 1) * (i - 2);
		cout << allPossibleCombination - attackingCombination << endl;
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
