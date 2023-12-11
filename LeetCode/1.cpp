#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len= nums.size();
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
    }
};

int main(){
    Solution solution;
    vector<int> ans, nums;
    int n;
    while(cin>>n){
        nums.push_back(n);
        if(cin.get() == '\n'){
            break;
        }
    }
    int target; 
    cin>>target;
    ans = solution.twoSum(nums, target);
    for(int i=0;i<(int)ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}