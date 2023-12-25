#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int best_len = 0;
        string best_s = "";
        int n = s.length();
        for (int mid = 0; mid < n; mid++) {
            for (int x = 0; mid - x >= 0 && mid + x < n; x++) {
                if (s[mid - x] != s[mid + x]) {
                    break;
                }
                int len = 2 * x + 1;
                if (len > best_len) {
                    best_len = len;
                    best_s = s.substr(mid - x, len);
                }
            }
        }
        for (int mid = 0; mid < n - 1; mid++) {
            for (int x = 1; mid - x + 1 >= 0 && mid + x < n; x++) {
                if (s[mid - x + 1] != s[mid + x]) {
                    break;
                }
                int len = 2 * x;
                if (len > best_len) {
                    best_len = len;
                    best_s = s.substr(mid - x + 1, len);
                }
            }
        }
        return best_s;
    }
};

int main() {
    Solution findSolution;
    string s;
    cin >> s;
    string answer = findSolution.longestPalindrome(s);
    cout << answer << endl;
    return 0;
}