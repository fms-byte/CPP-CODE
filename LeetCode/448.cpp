class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> ans(n, false);
        vector<int> need;

        for (int i = 0; i < n; i++) {
            if (!ans[nums[i] - 1])
                ans[nums[i] - 1] = true;
        }

        for (int i = 0; i < n; i++) {
            if (!ans[i])
                need.push_back(i + 1);
        }
        return need;
    }
};