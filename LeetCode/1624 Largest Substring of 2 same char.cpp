class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        int maxlen = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    maxlen = max(maxlen, j - i - 1);
                }
            }
        }
        return maxlen;
    }
};