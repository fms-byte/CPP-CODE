#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int>mp;
        int cnt = 0;

        for (auto a : nums) {
            mp[a]++;
            cnt = max(cnt, mp[a]);
        }

        vector<vector<int>>v(cnt);
        for (auto a : mp) {
            int num = a.first;
            int freq = a.second;

            for (int i = 0; i < freq; i++) {
                v[i].push_back(num);
            }
        }
        return v;
    }
};

int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        vector<vector<int>> ans;
        ans = findSolution.findMatrix(nums);

        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        //cout << ans << endl;
    }
    return 0;
}
