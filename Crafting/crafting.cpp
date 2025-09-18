#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] < b[i]) cnt++;
    }

    if (cnt >= 2) {
        cout << "NO\n";
        return;
    }
    else if (cnt == 0) {
        cout << "YES\n";
        return;
    }
    else {
        ll mx = 0, mn = LLONG_MAX;
        for (ll i = 0; i < n; i++) {
            if (a[i] < b[i])
                mx = b[i] - a[i];
            else
                mn = min(mn, a[i] - b[i]);
        }
        if (mx <= mn)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}

