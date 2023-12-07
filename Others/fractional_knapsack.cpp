#include<bits/stdc++.h>
using namespace std;

bool compare( pair<int, int> x, pair<int, int> y)
{
	double p = (double) x.first / x.second;
	double q = (double) y.first / y.second;
	return p > q;
}
int main()
{
	int n;
	//cout<<"Enter Number of Items: ";
	cin >> n;
	vector < pair<int, int> >a(n);
	//cout<<"Enter Value and Weight for each Items..."<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i].first >> a[i].second;
	}
	//cout<<"Enter the Capacity of Knapsack: ";
	int w;
	cin >> w;

	sort(a.begin(), a.end(), compare);

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (w >= a[i].second) {
			ans += a[i].first;
			w -= a[i].second;
			continue;
		}
		double frac = (double) a[i].first / a[i].second;
		ans += frac * w;
		w = 0;
		break;
	}
	cout << "The maximum profit is : " << ans << endl;
	return 0;
}
/*

5
21 7
24 4
12 6
40 5
30 6
20

*/
