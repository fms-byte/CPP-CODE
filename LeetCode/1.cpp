#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> ans(2);
        bool flag = false;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == target) {
                    ans[0] = i;
                    ans[1] = j;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> ans, nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
        if (cin.get() == '\n') {
            break;
        }
    }
    int target;
    cin >> target;
    ans = solution.twoSum(nums, target);
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}