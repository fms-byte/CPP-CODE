class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) {
            arr[0] = -1;
            return arr;
        }
        int maxi = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = -1;

        for (int i = n - 2; i >= 0; i--) {
            arr[i] = max(arr[i], arr[i + 1]);
        }

        return arr;
    }
};