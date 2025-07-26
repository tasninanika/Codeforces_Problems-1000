#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> x(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> x[i];
        }

        vector<long long> ans(n);
        ans[0] = 501;

        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] + x[i - 1];
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
