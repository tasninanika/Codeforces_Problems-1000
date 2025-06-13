#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        vector<pair<long long, long long>> h;
        for(int i = 0; i < n; i++){
            long long res = arr[i] % k;
            if(res == 0){
                res += k;
            }
            h.push_back({-res, i});
        }

        sort(h.begin(), h.end());

        for(int i = 0; i < h.size(); i++){
            cout << h[i].second + 1 << " ";
        }
    }


    return 0;
}
