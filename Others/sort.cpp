#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	map<int, int> ::iterator itr;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	sort(a, a + n);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	printf("\n\n");
	for (itr = mp.begin(); itr != mp.end(); ++itr) {
		cout  << itr->first << " = " << itr->second << endl;
	}
	return 0;
}