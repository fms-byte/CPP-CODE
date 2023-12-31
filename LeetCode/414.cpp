class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        vector<int> uniq;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                uniq.push_back(nums[i]);
            }
        }

        sort(uniq.begin(), uniq.end());

        int m = uniq.size();

        if (m < 3) {
            return uniq[m - 1];
        }

        return uniq[m - 3];
    }
};