class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> sortedHeights(n);
        for (int i = 0; i < n; i++) {
            sortedHeights[i] = heights[i];
        }
        sort(sortedHeights.begin(), sortedHeights.end());

        int milbena = 0;
        for (int i = 0; i < n; i++) {
            if (sortedHeights[i] != heights[i])
                milbena++;
        }

        return milbena;
    }
};