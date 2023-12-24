#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define nline cout<<'\n'
typedef long long int ll;
typedef double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define arr_sort(a) sort(a, a+n);
#define vec_sort(v) sort(v.begin(),v.end());
#define Rev(v) reverse(v.begin(),v.end());
#define show(n) cout << n << endl;

const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;

void solve() {
	vector<string> word1, word2;
	//cin>>word1>>word2;
	word1 = {"ab", "c"};
	word2 = {"a", "bc"};

	string ans1 = "", ans2 = "";

	for (auto i : word1) {
		ans1 += i;
	}
	for (auto i : word2) {
		ans2 += i;
	}

	string result = (ans1 == ans2) ? "True\n" : "False\n";
	cout << result;
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

