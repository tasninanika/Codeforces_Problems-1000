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
        }

    }

    return 0;
}
