#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0, maxVal = -1, c = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            maxVal = max(maxVal, x);
            sum += x;

            if (sum == 2 * maxVal) {
                c++;
            }
        }

        cout << c << endl;;
    }

    return 0;
}

