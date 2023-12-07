#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int R = 0;
	if (n < 3) {
		R = 0;
	}
	else {
		sort(a, a + n);
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				for (int k = j + 1; k < n; k++) {
					if ((a[i] && a[j] && a[k]) && (a[i] + a[j]) > a[k])
					{
						R++;
						a[i] = a[j] = a[k] = 0;
					}
				}

			}
		}
	}
	cout << R << endl;
	return 0;
}