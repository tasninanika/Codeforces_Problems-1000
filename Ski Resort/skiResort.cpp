#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, q;
        cin >> n >> k >> q;

        int t[n];
        int d = 0;
        long long ans = 0;

        for(int i = 0; i < n; i++){
            cin >> t[i];
            if(t[i] <= q){
                d++;
            }
            else{
                d = 0;
            }
            ans += max(0, d - k + 1);
        }
        cout << ans << endl;
    }

    return 0;
}
