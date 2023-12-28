#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string temp = "";
        int jump = 2 * (numRows - 1);
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.size(); j += jump) {
                temp += s[j];
                if (i > 0 && i < numRows - 1 && j + jump - (2 * i) < s.size()) {
                    temp += s[j + jump - (2 * i)];
                }
            }
        }
        return temp;
    }
};

int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int numRows;
        cin >> numRows;

        string ans = findSolution.convert(s, numRows);

        cout << ans << endl;
    }
    return 0;
}