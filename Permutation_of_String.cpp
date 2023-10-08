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

void solve() {
	string s;
	cin >> s;
	int n = s.size();

	set<string> uniquePermutations;

	permute(s, 0, n - 1, uniquePermutations);

	cout << uniquePermutations.size() << endl;
	for (const string& permutation : uniquePermutations) {
		cout << permutation << endl;
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
