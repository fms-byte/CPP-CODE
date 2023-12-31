class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) {
            return false;
        }

        // Check for consecutive equal elements
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                return false;
            }
        }

        // Find the index of the maximum element
        int maxIndex = max_element(arr.begin(), arr.end()) - arr.begin();

        // Check if the maximum element is at the beginning or end
        if (maxIndex == 0 || maxIndex == n - 1) {
            return false;
        }

        // Check the increasing part of the array
        for (int i = 0; i < maxIndex; i++) {
            if (arr[i] >= arr[i + 1]) {
                return false;
            }
        }

        // Check the decreasing part of the array
        for (int i = maxIndex; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                return false;
            }
        }

        return true;
    }
};