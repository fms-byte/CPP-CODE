//Farhan404
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
#define Sort(v) sort(v.begin(),v.end());
#define Rev(v) reverse(v.begin(),v.end());

const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;

void solve() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int x= a+b*c;
    int y= a*(b+c);
    int z= a*b*c;
    int w= (a+b)*c;
    int p= a+b+c;
    int q= a*b+c;

    int ans = max(x, max(y, max(z,max(w, max(p,q)))));
    cout<<ans<<endl;
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
