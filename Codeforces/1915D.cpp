#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, ans = "";
        cin >> s;

        set<int> index;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e') index.insert(i - 1);
        }

        for (int i = 0; i < n; i++) {
            if (i == 0) ans += s[i];
            else {
                if (index.find(i) != index.end()) ans += '.';
                ans += s[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}