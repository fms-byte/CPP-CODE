#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool compareFiles(const string& file1, const string& file2) {
    ifstream fs1(file1);
    ifstream fs2(file2);

    if (!fs1.is_open() || !fs2.is_open()) {
        cout << "Failed to open one or both files." << endl;
        return false;
    }

    string line1, line2;
    int lineNum = 1;
    bool filesMatch = true;

    while (getline(fs1, line1) && getline(fs2, line2)) {
        if (line1 != line2) {
            cout << "Files differ at line " << lineNum << ":" << endl;
            cout << file1 << ": " << line1 << endl;
            cout << file2 << ": " << line2 << endl;
            filesMatch = false;
            break;
        }
        lineNum++;
    }

    if (filesMatch && (!fs1.eof() || !fs2.eof())) {
        cout << "Files have different number of lines." << endl;
        filesMatch = false;
    }

    return filesMatch;
}

int main() {
    string file1, file2;

    cout << "Enter the path to the first text file: ";
    cin >> file1;

    cout << "Enter the path to the second text file: ";
    cin >> file2;

    if (compareFiles(file1, file2)) {
        cout << "The files match." << endl;
    } else {
        cout << "The files do not match." << endl;
    }

    return 0;
}
