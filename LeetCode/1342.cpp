#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            if (num & 1) {
                num--;
            } else {
                num /= 2;
            }
            steps++;
        }
        return steps;
    }
};


int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ans = findSolution.numberOfSteps(n);

        cout << ans << endl;
    }
    return 0;
}