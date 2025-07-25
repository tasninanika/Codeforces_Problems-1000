#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string str;
        cin >> str;

        int c = 0;
        for (int i = 0; i < n - 1; i++) {
            if (str[i] != str[i + 1]) {
                c++;
            }
        }

        int maxi = a * n + ((b >= 0) ? (b * n) : (b * (c / 2 + 1)));

        cout << maxi << endl;
    }
    return 0;
}
