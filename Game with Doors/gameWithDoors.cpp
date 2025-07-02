#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        int overlap_left = max(l, L);
        int overlap_right = min(r, R);

        if(overlap_left <= overlap_right){
            cout << (overlap_right - overlap_left + 1) << endl;
        }
        else{
            cout << min(abs(L - r), abs(l - R)) << endl;
        }
    }

    return 0;
}
