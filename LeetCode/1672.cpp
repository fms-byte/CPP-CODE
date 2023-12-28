#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int ans = 0, cnt = 0;
    for (int i = 0; i < accounts.size(); i++) {
      for (int j = 0; j < accounts[i].size(); j++) {
        cnt += accounts[i][j];
      }
      ans = max(ans, cnt);
      cnt = 0;
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