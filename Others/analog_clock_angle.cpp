//Farhan404
#include<bits/stdc++.h>
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define ll long long int
#define ld double

using namespace std;
void Sieve(int n)//prime numbers from 0 to n
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	int cnt = 0;
	for (int p = 2; p <= n; p++) {
		if (prime[p]) {
			cout << p << " ";
			cnt++;
		}
	}
	//cout << cnt << " Prime Nmbers in range 0 to " << n << endl;
}

void print(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


void solve()
{
	//int h, m;
	//cin >> h >> m;
	int cnt = 0;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 60; ++j)
		{
			double hour = 0.5 * (i * 60 + j);
			double mins = 6 * j;
			double angle = abs(hour - mins);
			angle = min(360 - angle, angle);
			if (angle == 180) {
				cnt++;
			}
			cout << i << " " << j << " > " << angle << endl;
		}
	}
	cout << "180 degree is " << cnt << " times" << endl;

}
int main()
{
	GET_FASTER;
	int t = 1;
	//cin >> t;
	for (int i = 1; i <= t; i++) {
		//cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}
