#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int sz = s.size();
        unordered_map<char, int> charIndexMap;

        for (int i = 0, start = 0; i < sz; i++) {
            if (charIndexMap.count(s[i]) != 0) {
                start = max(start, charIndexMap[s[i]] + 1);
            }
            charIndexMap[s[i]] = i;
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};

int main() {
    Solution findSolution;
    string s;
    cin >> s;
    int answer = findSolution.lengthOfLongestSubstring(s);
    cout << answer << endl;
    return 0;
}