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
#define show(n) cout << n << endl;

const ll MOD = 1e9 + 7;
const ll mx = LLONG_MAX;
const ll mn = LLONG_MIN;

void solve() {
    ll x, y, z;
    cin >> x >> y >> z;
    ll a = x / z; //sasha kinte parbe 5/3 = 1 rem = 2
    ll b = y / z; //masha kinte parbe 4/3 = 1 rem = 1
    ll s = (x + y) / z; // 5+4 = 9/3 = 3
    if (a + b == s) //
        cout << s << " " << 0 << endl;
    else
        cout << s << " " << z - max(x % z, y % z) << endl;
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

