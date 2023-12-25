#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0' || s.empty())
            return 0;

        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i < n + 1; i++) {
            int one_digit = s[i - 1] - '0';
            int two_digit = stoi(s.substr(i - 2, 2));

            if (one_digit != 0) {
                dp[i] += dp[i - 1];
            }

            if (two_digit >= 10 && two_digit <= 26) {
                dp[i] += dp[i - 2];
            }
        }

        return dp[n];
    }
};

int main() {
    Solution findSolution;
    string s;
    cin >> s;
    int ans = findSolution.numDecodings(s);
    cout << ans << '\n';
    return 0;
}