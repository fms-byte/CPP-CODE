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
	long long k;
	cin >> k;

	long long len = 1;
	long long digits = 9;
	long long start = 1;

	while (k > len * digits) {
		k -= len * digits;
		len++;
		digits *= 10;
		start *= 10;
	}

	long long number = start + (k - 1) / len;

	long long position = (k - 1) % len;

	string numberString = to_string(number);
	cout << numberString[position] << endl;

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

