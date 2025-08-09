#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int cnt = 0, cat = 0;
        while (cat < v.back()) {
            cat += (n - v.back());
            cnt++;
            v.pop_back();
            if (v.empty()) break;
        }
        cout << cnt << "\n";
    }
    return 0;
}

