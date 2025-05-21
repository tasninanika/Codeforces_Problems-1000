#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int res = 2 * (((a > c) - (a < c)) + ((b > d) - (b < d)) > 0)
                + 2 * (((a > d) - (a < d)) + ((b > c) - (b < c)) > 0);

        cout << res << endl;
    }

    return 0;
}
