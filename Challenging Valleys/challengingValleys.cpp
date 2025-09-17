#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (b.empty() || b.back() != a[i])
                b.push_back(a[i]);
        }

        int m = b.size();
        if (m == 1 || m == 2) {
            cout << "YES\n";
            continue;
        }

        int valley = 0;
        for (int i = 0; i < m; i++) {
            if (i == 0) {
                if (b[i] < b[i + 1]) valley++;
            }
            else if (i == m - 1) {
                if (b[i] < b[i - 1]) valley++;
            }
            else {
                if (b[i] < b[i - 1] && b[i] < b[i + 1]) valley++;
            }
        }

        if (valley == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
