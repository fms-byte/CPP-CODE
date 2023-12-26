#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int mod = (int)1e9 + 7;
    int recursion(vector<vector<int>>& dp, int n, int k, int target) {
        if (target == 0 && n == 0) return 1;
        if (target <= 0 || n == 0) return 0;

        if (dp[n][target] != -1) return dp[n][target] % mod;

        int ways = 0;
        for (int i = 1; i <= k; i++) {
            ways = (ways + recursion(dp, n - 1, k, target - i)) % mod;
        }
        dp[n][target] = ways % mod;
        return dp[n][target];
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return recursion(dp, n, k, target);
    }
};

int main() {
    Solution findSolution;
    int n, k, target;
    cin >> n >> k >> target;
    int result = findSolution.numRollsToTarget(n, k, target);
    cout << result << endl;
    return 0;
}