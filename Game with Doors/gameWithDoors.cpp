#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int l, r;
        cin >> l >> r;

        int L, R;
        cin >> L >> R;

        if(r < L || R < l){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }

    return 0;
}

