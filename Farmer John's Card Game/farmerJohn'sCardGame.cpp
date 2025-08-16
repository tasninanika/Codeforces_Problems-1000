#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        vector<int> perm(n, -1);
        bool ok = true;

        for (int i = 0; i < n; i++) {
            sort(a[i].begin(), a[i].end());

            for (int j = 1; j < m; j++) {
                if (a[i][j] != a[i][j - 1] + n) {
                    ok = false;
                }
            }
            if (!ok) break;
            perm[a[i][0] % n] = i + 1;
        }

        if (!ok) {
            cout << -1 << "\n";
        }
        else {
            for (int i = 0; i < n; i++) {
                cout << perm[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
