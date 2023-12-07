#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n], b[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			if ((a[i] + b[n - 1 - i]) > x)
			{
				ans = 1;
			}
		}

		if (ans == 0)
		{
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;

	}
	return 0;
}