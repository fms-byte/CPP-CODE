#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int ans = 0;
	bool YES = false;
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i - 1]) {
			cout << a[i];
			YES = true;
			break;
		}
	}
	if (YES == false) {
		cout << "NO";
	}
	return 0;
}