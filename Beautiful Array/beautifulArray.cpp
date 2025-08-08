#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long minB = (s - (n - 1) * (k - 1)) / k;
        long long maxB = s / k;

        if(b < minB || b > maxB){
            cout << -1 << endl;
            continue;
        }

        vector<long long> result(n, 0);
        result[0] = b * k;
        long long remaining = s - result[0];

        long long extra = min(remaining, k - 1);
        result[0] += extra;
        remaining -= extra;

        for(int i = 1; i < n; ++i){
            long long val = min(remaining, k - 1LL);
            result[i] = val;
            remaining -= val;
        }

        for(int i = 0; i < n; ++i){
            cout << result[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}

