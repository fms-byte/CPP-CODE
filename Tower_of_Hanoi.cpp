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

void hanoi(int disk, char s, char dest, char i) {
	if (disk > 0) {
		hanoi(disk - 1, s, i, dest);
		cout << "Disk " << disk << " --> " << s << " >> " << dest << endl;
		hanoi(disk - 1, i, dest, s);
	}
}

void solve()
{
	int n;
	cin >> n;
	ll step = (1 << n) - 1;
	cout << step << endl;
	hanoi(n, 'A', 'C', 'B');
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
