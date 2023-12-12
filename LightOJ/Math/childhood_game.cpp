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
    ll n;
    string name;
    cin>>n>>name;
    if(name == "Alice"){
        if (n%3 == 1)
            cout << "Bob"<<endl;
        else 
            cout << "Alice"<<endl;
    }
    else {
        if (n%3 != 0)
            cout << "Bob"<<endl;
        else
            cout << "Alice"<<endl;
    }
}

int main()
{
	GET_FASTER;
	int t = 1;
	cin >> t;
	for (ll i = 1; i <= t; i++) {
		cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}

