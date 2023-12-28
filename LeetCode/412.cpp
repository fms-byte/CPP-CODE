#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<string> fizzBuzz(int n) {
    vector<string> ans(n, "");
    string threeAndFive = "FizzBuzz";
    string three = "Fizz";
    string five = "Buzz";
    for (int i = 1; i <= n; i++) {
      if (i % 3 == 0 && i % 5 == 0) {
        ans[i - 1] += threeAndFive;
      } else if (i % 3 == 0) {
        ans[i - 1] += three;
      } else if (i % 5 == 0) {
        ans[i - 1] += five;
      } else {
        ans[i - 1] += to_string(i);
      }
    }
    return ans;
  }
};

int main() {
  Solution findSolution;
  int t;
  cin >> t;
  while (t--) {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> accounts(m, vector<int> (n));

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> accounts[i][j];
      }
    }

    int ans = findSolution.maximumWealth(accounts);

    cout << ans << endl;
  }
  return 0;
}