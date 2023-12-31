class Solution {
public:
    int countDigit(int num) {
        int cnt = 0;
        while (num > 0) {
            num /= 10;
            cnt++;
        }
        return cnt;
    }

    int findNumbers(vector<int>& nums) {
        int evenDigit = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            evenDigit = countDigit(nums[i]);
            if (!(evenDigit & 1)) cnt++;
        }
        return cnt;
    }
};