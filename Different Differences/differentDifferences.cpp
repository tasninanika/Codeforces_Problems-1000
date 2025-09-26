#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> k >> n;

        int diff = 1;
        vector<int> ans = {1};

        for (int i = 2; i <= k; i++) {
            int nxt = ans.back() + diff;
            int remElements = n - nxt;
            int remPlaces = k - i;

            if (remElements >= remPlaces) {
                ans.push_back(nxt);
                diff++;
            }
            else {
                ans.push_back(ans.back() + 1);
            }
        }

        for (int x : ans)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}
