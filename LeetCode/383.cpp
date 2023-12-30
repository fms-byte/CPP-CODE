#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    map<char, int> noteFreq, magFreq;

    for (int i = 0; i < ransomNote.size(); i++) {
      noteFreq[ransomNote[i]]++;
    }

    for (int i = 0; i < magazine.size(); i++) {
      magFreq[magazine[i]]++;
    }

    int cnt = 0;

    for (char c = 'a'; c <= 'z'; c++) {
      auto note = noteFreq.find(c);
      auto magazine = magFreq.find(c);

      if (note != noteFreq.end() && magazine != magFreq.end()) {
        if ((note->second) <= (magazine->second)) {
          cnt++;
        }
      }
    }

    if (cnt == (int)noteFreq.size()) return true;

    return false;
  }
};


int main() {
  Solution findSolution;
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;

    bool ans = findSolution.canConstruct(a, b);

    cout << (ans ? "True" : "False") << endl;
  }
  return 0;
}