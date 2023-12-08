// Farhan404
#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
#define endl '\n'
#define nline cout << '\n'
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define ld double
#define Sort(v) sort(v.begin(), v.end());
#define Rev(v) reverse(v.begin(), v.end());
const int N = 1e6 + 5;
const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;

void solve()
{
	ll n;
	cin >> n;
	ll row, col;
	ll root = ceil(sqrtl(n*1.0));
	ll lackings = root * root - n;
	if(lackings < root){
		row =root;
		col = lackings + 1;
	}else{
		col = root;
		row = n - (root -1)*(root-1);
	}
	if(root % 2 ==0){
		ll temp = col;
		col = row;
		row = temp;
	}
	
	cout << col<<" "<<row << endl;
}

int main()
{
	GET_FASTER;
	int t = 1;
	cin >> t;
	for (ll i = 1; i <= t; i++)
	{
		cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}
