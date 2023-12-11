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

bool isLucky(int n){
    int digit;
    vi vec;
    int cnt=0;
    while(n!=0){
        digit = n%10;
        vec.pb(digit);
        n=n/10;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i]==4 || vec[i] ==7){
            cnt++;
        }
    }
    if(cnt == vec.size())
        return true;
    
    return false;
}

void solve() {
    int n;
    cin>>n;
    int lucky[] = {4, 7, 44, 47, 74, 77 , 444, 447, 474, 477, 744, 747, 774, 777};
    if(isLucky(n)){
        cout<<"YES"<<endl;
    }else{
        for(int i=0;i<14;i++){
            if(n%lucky[i] == 0){
                cout<<"YES"<<endl;
                return;
            }
        }
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
