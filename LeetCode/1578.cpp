#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totalTime = 0;
        int i = 0, j = 0;

        while (i < neededTime.size() && j < neededTime.size()) {
            int currTotal = 0, currMax = 0;
            while (j < neededTime.size() && colors[i] == colors[j]) {
                currTotal += neededTime[j];
                currMax = max(currMax, neededTime[j]);
                j++;
            }
            totalTime += currTotal - currMax;
            i = j;
        }
        return totalTime;
    }
};

int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> neededTime(n);
        for (int i = 0; i < n; i++) cin >> neededTime[i];

        int ans = findSolution.minCost(s, neededTime);
        cout << ans << endl;
    }
    return 0;
}