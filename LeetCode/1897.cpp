#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        map<char, int> charCount;

        for (auto eachWord : words) {
            for (int i = 0; i < eachWord.size(); i++) {
                charCount[eachWord[i]]++;
            }
        }

        int cnt = 0;

        for (auto key : charCount) {
            if ((key.second) % n == 0) cnt++;
            //cout<<key.first<<" "<<key.second<<endl;
        }

        if (cnt == (int)charCount.size()) return true;

        return false;
    }
};


int main() {
    Solution findSolution;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> words(n);

        for (int i = 0; i < n; i++) cin >> words[i];

        bool ans = findSolution.makeEqual(words);

        cout << ((ans) ? "True" : "False") << endl;
    }
    return 0;
}