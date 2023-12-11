//Farhan404
#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define nline cout<<'\n'
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define ld double
#define Sort(v) sort(v.begin(),v.end());
#define Rev(v) reverse(v.begin(),v.end());
const int N = 1e6 + 5;
const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;


void solve() {
	char ch[3][3];
    char ans = 'D';
    int r=-1,c=-1;
    string word = "";

    for (int i = 0; i < 3; i++){
        for(int j=0;j<3;j++){
            cin>>ch[i][j];            
            if(ch[i][j] < ans){
                ans = ch[i][j];
                r = i;
                c = j;
            }
        }
    }

    word += ch[r][c];
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == r && j == c){
                continue;
            }
            if(ch[r][c+1]){}

        }
    }
    cout<<word<<endl;
    
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
