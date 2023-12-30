#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int A = 0, B = 0, C = 0;
    char ch;
    for (int i = 1; i <= 9; i++) {
      cin >> ch;
      if (ch == 'A') A++;
      else if (ch == 'B') B++;
      else if (ch == 'C') C++;
    }

    if (A < 3) ch = 'A';
    else if (B < 3) ch = 'B';
    else if (C < 3) ch = 'C';

    cout << ch << endl;
  }
  return 0;
}