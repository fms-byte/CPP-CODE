class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left < right) {
            while (left < n && nums[left] % 2 == 0) {
                left++;
            }

            while (right >= 0 && nums[right] % 2 == 1) {
                right--;
            }

            if (left < right) {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }

        return nums;
    }
};