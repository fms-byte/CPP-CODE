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


const int n = 8;
string chess[n];
const int limit = 2 * (n - 1);
bool leftDiagonal[limit] , rightDiagonal[limit] , col[n];
int ways = 0;


void putNext(int r) {
	if (r == n) {
		ways++;
		return;
	}
	for (int c = 0; c < n; c++)
	{
		if (col[c] == 0 && leftDiagonal[r - c + n - 1] == 0 && rightDiagonal[r + c] == 0 && chess[r][c] == '.')
		{
			col[c] = leftDiagonal[r - c + n - 1] = rightDiagonal[r + c] = true;
			putNext(r + 1);
			col[c] = leftDiagonal[r - c + n - 1] = rightDiagonal[r + c] = false;
		}
	}
}

void solve() {
	for (int i = 0; i < n; ++i)
	{
		cin >> chess[i];
	}
	putNext(0);
	cout << ways << endl;

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

