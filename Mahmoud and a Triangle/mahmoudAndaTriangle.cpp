#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int check = 0;

        for (int j = 0; j < n - 2; j++) {
            int a = v[j];
            int b = v[j + 1];
            int c = v[j + 2];

            if (a + b > c && b + c > a && c + a > b) {
                check = 1;
                cout << "YES" << endl;
                break;
            }
        }

        if (check == 0) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
