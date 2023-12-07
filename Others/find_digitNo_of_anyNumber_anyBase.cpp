//Farhan404
#include<bits/stdc++.h>
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define ll long long int
#define ld double

using namespace std;

double dp[1000001];

void print(ll a[], int n) {
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve()
{
    ll n, b;
    cin >> n >> b;
    ll digits = dp[n] / log(b) + 1;
    cout << digits << endl;
}
int main()
{
    GET_FASTER;
    int t = 1;
    cin >> t;
    dp[0] = 0;
    for (int i = 1; i <= 1000000; ++i)
    {
        dp[i] = dp[i - 1] + log(i);
    }
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
