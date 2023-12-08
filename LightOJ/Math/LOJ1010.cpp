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
    int m, n;
    cin>>m>>n;
    if(m ==1 || n==1){
        cout<<max(m,n)<<endl;
        return;
    }
    if(m==2 || n==2){
        cout<<((m*n)/8)*4 + (((m*n)%8)>=4?4: (m*n)%8)<<endl;
        return;
    }
    int ans = 0;
    if(m%2 == 0){
        ans= (m/2) * n;
    }else{
        float x = (float)m/2;
        float y = (float)n/2;
        ans = floor(x)*floor(y) + ceil(x)*ceil(y);
    }
    cout<<ans<<endl;
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
