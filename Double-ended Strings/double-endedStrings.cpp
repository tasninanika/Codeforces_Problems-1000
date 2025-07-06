#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int n = s1.size();
        int m = s2.size();

        int dp[101][101] = {0};

        int maxLength = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    maxLength = max(maxLength, dp[i][j]);
                }
                else {
                    dp[i][j] = 0;
                }
            }
        }

        int answer = n + m - 2 * maxLength;

        cout << answer << endl;
    }

    return 0;
}
