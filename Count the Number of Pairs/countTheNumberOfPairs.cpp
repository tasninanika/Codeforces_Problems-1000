#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int small[26] = {0};
        int big[26] = {0};

        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                big[s[i] - 'A']++;
            } else {
                small[s[i] - 'a']++;
            }
        }

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            int pairs;
            if (small[i] < big[i]) {
                pairs = small[i];
            } else {
                pairs = big[i];
            }

            ans += pairs;
            small[i] -= pairs;
            big[i] -= pairs;

            int remaining;
            if (small[i] > big[i]) {
                remaining = small[i];
            } else {
                remaining = big[i];
            }

            int add = remaining / 2;
            if (add > k) {
                add = k;
            }

            ans += add;
            k -= add;
        }

        cout << ans << "\n";
    }

    return 0;
}
