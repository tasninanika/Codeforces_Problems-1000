#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int res = 0;

        if ((a > c && b > d) || (a > d && b > c)) {
            res = 2;
        }

        cout << res << endl;
    }

    return 0;
}
