#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;

    if (!(cin >> n))
        return 0;

    if (n % 2 == 1) {
        cout << 0 << '\n';
        return 0;
    }

    long long S = n / 2;
    long long ans = (S - 1) / 2;

    if (ans < 0)
        ans = 0;

    cout << ans << endl;

    return 0;
}

