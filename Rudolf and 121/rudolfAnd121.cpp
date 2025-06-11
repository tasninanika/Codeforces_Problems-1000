#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int i;
        for(i = 0; i + 2 < n; i++){
            if(a[i] < 0){
                break;
            }

            long long x = a[i];
            a[i] -= x;
            a[i + 1] -= 2 * x;
            a[i + 2] -= x;
        }

        if(i + 2 < n){

        }

    }

    return 0;
}
