class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        int sz = nums.size();
        for (int i = 0; i < sz; i++) mp[nums[i]]++;
        bool possible = true;
        for (auto i : mp) {
            if (i.second < 2) {
                possible = false;
                break;
            }
        }
        if (!possible) return -1;

        int ans = 0;
        for (auto num : mp) {
            int x = num.second;
            ans += ((x % 3 == 0) ? x / 3 : 1 + x / 3);
        }

        return ans;
    }
};