#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int result = 1e9;

        for (int add = 0; add <= 30; ++add) {
            int base = m + add;
            if (base == 1)
                continue;

            int x = n;
            int ops = 0;
            while (x > 0) {
                x /= base;
                ops++;
            }
            result = min(result, add + ops);
        }

        cout << result << '\n';
    }

    return 0;
}

