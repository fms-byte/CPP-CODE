//Farhan404
#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define nline cout<<'\n'
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define ld double
#define Sort(v) sort(v.begin(),v.end());
#define Rev(v) reverse(v.begin(),v.end());
const int N = 1e6 + 5;
const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;


void solve() {
	string str;
	cin >> str;
	string result = "";
	int n = str.size();
	vector<int> index;
	stack<int> stack_b, stack_B;
	for (int i = 0; i < n; ++i)
	{
		if (str[i] == 'b') {
			if (!stack_b.empty()) {
				stack_b.pop();
			}
		} else if (str[i] == 'B') {
			if (!stack_B.empty()) {
				stack_B.pop();
			}
		} else if (str[i] >= 'a' && str[i] <= 'z' && str[i] != 'b') {
			stack_b.push(i);
		} else if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != 'B') {
			stack_B.push(i);
		}
	}

	while (!stack_b.empty()) {
		index.pb(stack_b.top());
		stack_b.pop();
	}

	while (!stack_B.empty()) {
		index.pb(stack_B.top());
		stack_B.pop();
	}

	sort(index.begin(), index.end());

	for (int i = 0; i < (int)index.size(); ++i)
	{
		//cout << index[i] << " ";
		result += str[index[i]];
	}
	cout << result << endl;
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
