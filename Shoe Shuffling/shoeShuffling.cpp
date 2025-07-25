#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> shoe_sz(n);

        for (int i = 0; i < n; i++) {
            cin >> shoe_sz[i];
        }

        vector<int> shuffling(n);
        for (int i = 0; i < n; i++) {
            shuffling[i] = i + 1;
        }

        bool possible = true;
        int i = 0;

        while (i < n) {
            int cur_sz = shoe_sz[i];

            int start = i;
            int end = i;
            while (end < n && shoe_sz[end] == cur_sz) {
                end++;
            }

            if (start == end - 1) {
                cout << -1 << endl;

                possible = false;
                break;
            }

            rotate(shuffling.begin() + start, shuffling.begin() + start + 1, shuffling.begin() + end);

            i = end;
        }

        if (possible) {
            for (int j = 0; j < n; j++) {
                cout << shuffling[j] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}

