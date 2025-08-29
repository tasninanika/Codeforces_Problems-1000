#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];

        vector<bool> known(n + 1, false);
        for (int i = 0; i < k; i++) {
            int q;
            cin >> q;
            known[q] = true;
        }

        string result = "";
        for (int i = 0; i < m; i++) {
            int excluded = a[i];

            if (k == n) {
                result += '1';
            } else if (k == n - 1) {
                if (!known[excluded]) result += '1';
                else result += '0';
            } else {
                result += '0';
            }
        }

        cout << result << endl;
    }

    return 0;
}
