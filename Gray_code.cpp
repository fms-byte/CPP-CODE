//Farhan404
#include <bits/stdc++.h>
using namespace std;
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
typedef long long int ll;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define ld double
const int N = 1e5 + 10;
const ll MOD = LLONG_MAX;

typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n;
    cin>>n;
 if (n <= 0)
  return;
  
 vector<string> arr;

 arr.pb("0");
 arr.pb("1");
 
 int i, j;
 for (i = 2; i < (1<<n); i = i<<1)
 {
  for (j = i-1 ; j >= 0 ; j--)
   arr.pb(arr[j]);

  for (j = 0 ; j < i ; j++)
   arr[j] = "0" + arr[j];

  for (j = i ; j < 2*i ; j++)
   arr[j] = "1" + arr[j];
 }
 for (i = 0 ; i < arr.size() ; i++ )
  cout << arr[i] << endl;
}
int main()
{
 GET_FASTER;
 ll t = 1;
 //cin >> t;
 for (ll i = 1; i <= t; i++) {
  //cout << "Case " << i << ": ";
  solve();
 }
 return 0;
}
