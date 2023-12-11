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

bool isValid(string& s){
    int cnt=0;
    for(int i=1;i<s.size();i++){
        if(s[i]>= 'A' && s[i]<='Z'){
            cnt++;
        }
    }
    if(cnt+1 == s.size()){
        return true;
    }
    return false;
}

void solve() {
    string s;
    cin>>s;
    string ans = s;

    if(ans[0]>='A' && ans[0]<= 'Z'){
        if(isValid(s)){            
            for(int i=0;i<ans.size();i++){
                ans[i] += 32;
            }
        }
    }
    else {
        if(isValid(s)){            
            for(int i=1;i<ans.size();i++){
                ans[i] += 32;
            }
            if(ans[0]>='a' && ans[0]<= 'z'){
                ans[0] -= 32;
            }
        }
    }
    
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
