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
    int houses, tasks;
    cin>>houses>>tasks;
    int current_house, next_house, house_index[tasks+1];

    for (int house = 1; house <= tasks; house++){
        cin>>house_index[house];
    }

    current_house = 1;
    ll time = 0;

    for (int house = 1; house <= tasks; house++){
        next_house = house_index[house];
        if(current_house>next_house){
            time += next_house - current_house + houses;
        }
        else{
            time += next_house - current_house;
        }
        current_house = next_house;
    }

    cout<<time<<endl; 
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

