#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> bonus;
        int heroes = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x == 0) heroes++;
            else bonus.push_back(x);
        }

        sort(bonus.rbegin(), bonus.rend());

        long long ans = 0;
        for (int i = 0; i < heroes && i < (int)bonus.size(); i++) {
            ans += bonus[i];
        }

        cout << ans << "\n";
    }
    return 0;
}

