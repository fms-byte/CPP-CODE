#include<bits/stdc++.h>
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
	GET_FASTER;
	// int t;
	// cin >> t;
	// while (t--)
	{
		set<int> s;
		s.insert(100);
		s.insert(80);
		s.insert(60);
		s.insert(100);
		s.insert(20);
		s.insert(40);

		set<int>::iterator it;
		cout << "The Elements are: " << endl;
		for (it = s.begin(); it != s.end(); it++)
		{
			/* code */
			cout << *it << " ";
		}
		cout << endl;

		cout << "Size of the SET: " << s.size() << endl;

		cout << "Removing Elements upto 60: " << endl;
		//s.erase(s.find( 80), s.end());
		for (it = s.begin(); it != s.end(); it++)
		{
			/* code */
			cout << *it << " ";
		}
		cout << "\n" << *s.lower_bound(20) << endl;
		cout << *s.upper_bound(20) << endl;
		cout << *s.lower_bound(60) << endl;
		//cout << *s.upper_bound(60) << endl;
		//cout << *s.lower_bound(80) << endl;
		cout << "Size of the Set: " << s.size() << endl;
		if (s.empty())
			cout << "The SET is Empty." << endl;
		else
			cout << "The SET is not Empty." << endl;


		int sum = 0;
		while (!s.empty())
		{
			sum += *s.begin();
			s.erase(s.begin());
		}
		cout << "The SUM of all Elements of the SET is: " << sum << endl;
		//s.erase(40);
	}
	return 0;
}