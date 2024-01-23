class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<int> dp = {0}; //single element - Empty String
        int ans = 0;

        for (auto s : arr) {
            int a = 0, dup = 0;
            for (char c : s) {
                dup |= a & (1 << (c - 'a')); //Checking for duplicate chars
                a |= 1 << (c - 'a'); //Represent the set of chars in s
            }

            if (dup > 0) continue; //s has duplicate chars, continue to next iteration

            for (int i = dp.size() - 1; i >= 0; i--) {
                if ((dp[i] & a) > 0) continue;
                dp.push_back(dp[i] | a); //Adding new bitsets
                ans = max(ans, __builtin_popcount(dp[i] | a)); //Maximum length
            }
        }
        return ans;
        /*
        Time Complexity: O(N*M)
        Space Complexity: O(2^M) (Size of 'dp' array can be up to 2^M)
        N = The number of string in the array
        M = The maximum length of a string
        */
    }
};