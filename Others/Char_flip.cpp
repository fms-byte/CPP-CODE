#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str, ans;
        getline(cin, str);

        ans = str;

        int cnt = 0;
        for (int i = 0; i < str.size(); i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                cnt++;
                if (cnt % 2 != 0) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        ans[i] = ans[i] - 32;
                } else {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                        ans[i] = ans[i] + 32;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}

/*
Python programming is very easy
I    love    Python    Programming
CSE110 Course
c

PyThOn PrOgRaMmInG iS vErY eAsY
I    lOvE    pYtHoN    pRoGrAmMiNg
CsE110 cOuRsE
C
*/
