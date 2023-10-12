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
const ll MOD = 1e9 + 7;

typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
	string s, ans = "", temp = "";
	cin >> s;
	ll n = s.size();
	map<char , int >m;
	map<char , int >::iterator itr;

	for (ll i = 0; i < n; i++)
		m[s[i]]++;

	if (m.size() == 1)
	{
		cout << s << endl;
		return;
	}
	if (n == 2) {
		cout << "NO SOLUTION" << endl;
		return;
	}
	if (n == 3) {
		if (m.size() == 3)
		{
			cout << "NO SOLUTION" << endl;
			return;
		} else if (m.size() == 2) {
			if (s[0] == s[1])
			{
				cout << s[0] << s[2] << s[1] << endl;
			} else if (s[1] == s[2]) {
				cout << s[1] << s[0] << s[2] << endl;
			}
			else
				cout << s << endl;
			return;
		}
	}
	//for n>=4
	ll cnt = 0, index = 0;
	for (itr = m.begin(); itr != m.end(); itr++) {
		//cout << itr->first << " - " << itr->second << endl;
		if (itr->second % 2 != 0)
		{
			for (ll i = 0; i < itr->second; i++) {
				temp += itr->first;
			}
			cnt++;
			if (cnt > 1) {
				cout << "NO SOLUTION" << endl;
				return;
			}
		} else {
			for (ll i = 0; i < (itr->second) / 2; ++i)
			{
				ans += itr->first;
				index++;
			}
		}
	}
	string rev = string(ans.rbegin(), ans.rend());
	cout << ans + temp + rev  << endl;
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
