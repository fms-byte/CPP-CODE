/*Insertion sort: In each iteration, insertion sort compares the current element with the next element
and determines whether the current element is grater than the one it was compared to.
If this is true, then it leaves the element in its place and moves on to the next
element. If it is false, then it finds its correct position is the sorted array and moves
it to that position by shifting all the elements which are larger in the
sorted array to one position ahead.*/
#include<bits/stdc++.h>
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define ll long long int
#define ld double
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	int x, j;
	for (int i = 1; i <= n; ++i) {
		x = a[i];
		j = i - 1;
		while (j >= 1 && a[j] > x)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
	for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << " ";
	}

}

int main()
{
	GET_FASTER;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
