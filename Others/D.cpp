#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long m, sum = 0, a;
		cin >> m;

		for (int i = 1; i <= m ; ++i)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
		if (t)
			cout << endl;


	}
	return 0;
}