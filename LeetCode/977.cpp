class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> squares(n);
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            squares[i] = x * x;
        }
        sort(squares.begin(), squares.end());
        return squares;
    }
};