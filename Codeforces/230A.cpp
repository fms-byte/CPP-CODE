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
#define arr_sort(a) sort(a, a+n);
#define vec_sort(v) sort(v.begin(),v.end());
#define Rev(v) reverse(v.begin(),v.end());

const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;

void solve() {
    int n;
    ll s;
    cin>>s>>n;
    int strength,bonus;
    vector<pi> vp;
    for (int i = 0; i < n; i++)
    {
        cin>>strength>>bonus;
        vp.pb(mp(strength,bonus));
    }
    vec_sort(vp);
    for(int i=0; i< vp.size();i++){
        if(s>vp[i].fi){
            s+=vp[i].se;
        }else{
            cout<<"NO"<<endl;
            return;
        }
        //cout<<vp[i].fi<<" "<<vp[i].se<<endl;
    }
    cout<<"YES"<<endl;
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

