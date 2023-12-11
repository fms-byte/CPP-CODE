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

int src(string& s, int start, char ch){
    for(int i=start; i<s.size(); i++){
        if(s[i]==ch){
            return i;
        }
    }
    return -1;
}

void solve() {
    string s;
    cin>>s;

    int h_index= src(s, 0, 'h');
    int e_index= src(s, h_index+1, 'e');
    int l_index_1= src(s, e_index+1, 'l');
    int l_index_2= src(s, l_index_1+1, 'l');
    int o_index= src(s, l_index_2+1, 'o');

    if(h_index<e_index && e_index<l_index_1 && l_index_1<l_index_2 && l_index_2<o_index){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }    
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
