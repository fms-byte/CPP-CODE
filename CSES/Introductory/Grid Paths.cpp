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

bool visited[7][7];
int paths = 0, steps = 0;

void calPath(int r, int c) {

	if (visited[r][c])
	{
		return;
	}

	bool hitwall = ((c >= 1 && c <= 5 && !visited[r][c + 1] && !visited[r][c - 1]) && ((r == 0 && visited[r + 1][c]) || (r == 6 && visited[r - 1][c]))) || ((r >= 1 && r <= 5 && !visited[r + 1][c] && !visited[r - 1][c]) && ((c == 0 && visited[r][c + 1]) || (c == 6 && visited[r][c - 1])));

	if (hitwall)
	{
		return;
	}
	if (r == 6 && c == 0) {
		if (steps == 48)
		{
			paths++;
			cout << paths << endl;
		}
		return;
	}

	visited[r][c] = true;

	if (r < 6 && !visited[r + 1][c]) {
		steps++;
		calPath(r + 1, c); //down
		steps--;
	}
	if (r > 0 && !visited[r - 1][c]) {
		steps++;
		calPath(r - 1, c); //up
		steps--;
	}
	if (c > 0 && !visited[r][c - 1]) {
		steps++;
		calPath(r, c - 1); //left
		steps--;
	}
	if (c < 6 && !visited[r][c + 1]) {
		steps++;
		calPath(r, c + 1); //right
		steps--;
	}
	visited[r][c] = false;
}


void solve() {
	calPath(0, 0);
	cout << paths << endl;

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

