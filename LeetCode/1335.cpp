#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        return minDifficultyVersion(jobDifficulty, d);
    }

    int minDifficultyVersion(const vector<int>& jobDifficulty, int d) {
        const int n = static_cast<int>(jobDifficulty.size());

        if (n < d) {
            return -1;
        } else if (n == d) {
            int totalDifficulty = 0;
            for (int difficulty : jobDifficulty)
                totalDifficulty += difficulty;
            return totalDifficulty;
        }

        // dp[j]:
        //    the minimum difficulty OF
        //       the first (j+1) jobs, exactly scheduled in (i+1) days.
        vector<int> dp(n);
        dp[0] = jobDifficulty[0];

        // Initializing the dp array to store the maximum difficulty encountered so far.
        for (int i = 1; i < n; ++i) {
            dp[i] = max(jobDifficulty[i], dp[i - 1]);
        }

        vector<int> dpPrev(n);


        // Dynamic Programming to find the minimum difficulty.
        for (int i = 1; i < d; ++i) {
            dp.swap(dpPrev); //swapping the dp, dpPrev vector

            for (int j = i; j < n; ++j) {
                int lastDayDifficulty = jobDifficulty[j];
                int tmpMin = lastDayDifficulty + dpPrev[j - 1];

                // Iterate to find the minimum difficulty for the current day.
                for (int t = j - 1; i - 1 < t; --t) {
                    lastDayDifficulty = max(lastDayDifficulty, jobDifficulty[t]);
                    tmpMin = min(tmpMin, lastDayDifficulty + dpPrev[t - 1]);
                }

                dp[j] = tmpMin;
            }
        }

        for (int i = 0; i < dp.size(); ++i) {
            cout << dp[i] << " ";
        } cout << endl;

        return dp.back();
    }
};


int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        vector<int> jobDifficulty(n);
        for (int i = 0; i < n; i++) cin >> jobDifficulty[i];
        cin >> d;
        int ans = findSolution.minDifficulty(jobDifficulty, d);
        cout << ans << endl;
    }
    return 0;
}