#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> sum;
        for (int i = 0; i < size1; i++) {
            sum.push_back(nums1[i]);
        }
        for (int i = 0; i < size2; i++) {
            sum.push_back(nums2[i]);
        }
        sort(sum.begin(), sum.end());
        int sz = sum.size();
        int ind = (sz % 2 == 0) ? ((sz / 2) - 1) : (sz / 2);
        int med = (sz % 2 == 0) ? (sum[ind] + sum[ind + 1]) : sum[ind];
        int dividend = (sz % 2 == 0) ? 2 : 1;
        double median = med / (double)dividend;

        return median;
    }
};

int main() {
    Solution findSolution;
    vector<int> nums1, nums2;
    int x;
    while (cin >> x) {
        nums1.push_back(x);
        if (cin.get() == '\n') break;
    }
    while (cin >> x) {
        nums2.push_back(x);
        if (cin.get() == '\n') break;
    }

    double answer = findSolution.findMedianSortedArrays(nums1, nums2);
    printf("%.5lf", answer);
    return 0;
}