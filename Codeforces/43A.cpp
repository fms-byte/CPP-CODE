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
	int lines;
	cin >> lines;
	string goals[lines];
	string first_team_goal, second_team_goal;
	for (int goal = 0; goal < lines; goal++) {
		cin >> goals[goal];
	}
	first_team_goal = goals[0];
	int team_1 = 0, team_2 = 0;
	for (int goal = 0; goal < lines; goal++) {
		if (goals[goal] == first_team_goal) {
			team_1++;
		} else {
			second_team_goal = goals[goal];
		}
	}

	team_2 = lines - team_1;
	if (team_1 > team_2) {
		cout << first_team_goal << endl;
	} else if (team_1 < team_2) {
		cout << second_team_goal << endl;
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

