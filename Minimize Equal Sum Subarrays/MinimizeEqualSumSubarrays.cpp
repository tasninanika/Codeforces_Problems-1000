#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        rotate(arr, arr + 1, arr + n);

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

