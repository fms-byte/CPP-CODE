#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPathCrossing(string path) {
        // N -> Up -> X same, Y = Y + 1
        // E -> Right -> X = X + 1, Y same
        // W -> Left -> X = X - 1, Y same
        // S -> Down -> X same, Y = Y - 1
        int x = 0, y = 0;
        set<pair<int, int>> s;
        int n = path.size();
        int set_size;
        s.insert(make_pair(0, 0));

        for (int i = 0; i < n; i++) {
            if (path[i] == 'N') {
                y++;
            } else if (path[i] == 'E') {
                x++;
            } else if (path[i] == 'W') {
                x--;
            } else if (path[i] == 'S') {
                y--;
            }

            set_size = s.size();

            s.insert(make_pair(x, y));

            if (set_size == s.size()) {
                return true;
            }
        }

        // for(auto i: s){
        //     if(i.first == 0 && i.second == 0){
        //         return true;
        //     }
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        return false;
    }
};

int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool ans = findSolution.isPathCrossing(s);
        cout << ans << endl;
    }
    return 0;
}