#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int len = arr.size();
        if (len == 1) {
            return 1;
        }

        int number = arr[0], cnt = 1, ans = -1;
        for (int i = 1; i < len; i++) {
            if (arr[i - 1] == arr[i]) {
                cnt++;
                if (cnt > ans) {
                    number = arr[i];
                    ans = cnt;
                }
            } else {
                cnt = 1;
            }
        }
        if ((float)ans > ((float)len / 4.0)) {
            return number;
        } else {
            return -1;
        }
    }
};

int main() {
    Solution solution;
    vector<int> arr;
    int n;
    while (cin >> n) {
        arr.push_back(n);
        if (cin.get() == '\n') {
            break;
        }
    }

    int ans = solution.findSpecialInteger(arr);
    if (ans != -1)
        cout << ans << endl;

    return 0;
}
