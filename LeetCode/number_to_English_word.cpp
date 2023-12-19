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


string convertTwoDigit(unsigned int num) {
	string belowTwenty[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

	if (num < 20) {
		return belowTwenty[num];
	} else {
		return tens[num / 10] + (num % 10 != 0 ? " " + belowTwenty[num % 10] : "");
	}
}

string convertThreeDigit(unsigned int num) {
	if (num % 100 == 0 && num >= 100) {
		return (convertTwoDigit(num / 100) + " Hundred");
	}
	return (num / 100 != 0 ? convertTwoDigit(num / 100) + " Hundred " : "") + (num % 100 != 0 ? convertTwoDigit(num % 100) : "");
}

string numberToWords(unsigned int num) {
	if (num == 0) {
		return "Zero";
	}

	string result;

	result += (num / 1000000000 != 0 ? convertThreeDigit(num / 1000000000) + " Billion" : "");
	if (num % 1000000000 != 0 && num >= 1000000000) {
		result += " ";
	}

	num %= 1000000000;
	result += (num / 1000000 != 0 ? convertThreeDigit(num / 1000000) + " Million" : "");
	if (num % 1000000 != 0 && num >= 1000000) {
		result += " ";
	}

	num %= 1000000;
	result += (num / 1000 != 0 ? convertThreeDigit(num / 1000) + " Thousand" : "");
	if (num % 1000 != 0 && num >= 1000) {
		result += " ";
	}

	num %= 1000;
	result += (num != 0 ? convertThreeDigit(num) : "");

	return result;
}

void solve() {
	unsigned int num;
	cin >> num;

	cout << numberToWords(num) << endl;
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

