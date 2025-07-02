#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        int ans = 0;
        if(r < L){
            ans = L - r;
        }
        else if(R < l){
            ans = l - R;
        }
        else{
            ans = 0;
        }

        cout << ans << endl;
    }
    return 0;
}
