#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int m = g.size();
        int n = s.size();
        int cnt = 0;
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] >= g[k]) {
                cnt++;
                k++;
                if (k >= m) break;
            }
        }
        return cnt;
    }
};

int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<int> g(m), s(n);
        for (int i = 0; i < m; i++) cin >> g[i];

        for (int i = 0; i < n; i++) cin >> s[i];

        int ans = findSolution.findContentChildren(g, s);
        cout << ans << endl;
    }
    return 0;
}
