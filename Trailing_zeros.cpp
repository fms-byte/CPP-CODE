#include <iostream>

using namespace std;

typedef long long int ll;

int main() {
    ll n;
    cin >> n;

    ll count = 0;
    ll divisor = 5;

    while (n / divisor > 0) {
        count += n / divisor;
        divisor *= 5;
    }

    cout << count << endl;

    return 0;
}
