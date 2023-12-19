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
    int s, t, cnt = 0;
    cin >> s >> t;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; i + j <= s; j++)
        {
            for (int k = 0; i + j + k <= s; k++)
            {
                if (i * j * k <= t)
                    cnt++;
            }
        }
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

