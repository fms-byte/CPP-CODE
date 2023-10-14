#include <iostream>
using namespace std;

void calculateBowlingFigures(string ballInfo) {
    int totalBalls = ballInfo.length();
    int totalOvers = totalBalls / 6; // Each over has 6 balls
    totalBalls %= 6; // Remaining balls after overs
    int totalRuns = 0;
    int totalWickets = 0;

    for (char ball : ballInfo) {
        if (ball == 'W') {
            totalWickets++;
        } else {
            totalRuns += ball - '0';
        }
    }
    //cout << ballInfo.length() << endl;
    cout << totalOvers << "." << totalBalls;
    if ((totalOvers * 6 + totalBalls) <= 6) {
        cout << " Over ";
    }
    else {
        cout << " Overs ";
    }
    cout << totalRuns;
    if (totalRuns > 1) {
        cout << " Runs ";
    }
    else {
        cout << " Run ";
    }
    cout << totalWickets;
    if (totalWickets > 1) {
        cout << " Wickets." << endl;
    }
    else {
        cout << " Wicket." << endl;
    }
//cout << endl;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string ballInfo;
        cin >> ballInfo;
        calculateBowlingFigures(ballInfo);
    }

    return 0;
}
