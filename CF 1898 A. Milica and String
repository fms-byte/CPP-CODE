//Farhan404
#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
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

void solve() {
	int n, k;
	cin >> n >> k;
	string str;
	cin >> str;

	vector<int> ans(n + 1);

	for (int i = 0; i < n; ++i)
	{
		ans[i + 1] = ans[i] + (str[i] == 'B');
	}

	// for (int i = 0; i <= n; ++i)
	// {
	// 	cout << ans[i] << " ";
	// }

	// cout << endl;

	if (ans[n] == k) {
		cout << 0 << endl;
		return;
	}
	cout << 1 << endl;
	if (ans[n] > k) {
		for (int i = 0; i <= n; ++i)
		{
			if (ans[n] - ans[i] == k) {
				cout << i << " " << 'A' << endl;
				return;
			}
		}
	}
	else {
		for (int i = 0; i <= n; ++i)
		{
			if (ans[n] - ans[i] + i == k)
			{
				cout << i << " " << 'B' << endl;
				return;
			}
		}
	}




}
int main()
{
	GET_FASTER;
	int t = 1;
	cin >> t;
	for (ll i = 1; i <= t; i++) {
		//cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}
