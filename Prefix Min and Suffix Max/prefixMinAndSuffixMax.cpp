#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        vector<long long> mn(n), mx(n);

        mn[0] = v[0];
        for(int i = 1; i < n; i++)
            mn[i] = min(mn[i - 1], v[i]);

        mx[n - 1] = v[n - 1];
        for(int i = n - 2; i >= 0; i--)
            mx[i] = max(mx[i + 1], v[i]);

        for(int i = 0; i < n; i++) {
            if (v[i] == mn[i] || v[i] == mx[i])
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}

