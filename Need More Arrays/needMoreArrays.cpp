#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int count_arrays = 0;
        int last = -1;

        for (int i = 0; i < n; i++) {
            if (last + 1 < a[i]) {
                count_arrays++;
                last = a[i];
            }
        }

        cout << count_arrays << endl;
    }

    return 0;
}
