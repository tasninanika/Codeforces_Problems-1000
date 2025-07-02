#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int r, b, d;
        cin >> r >> b >> d;

        if(r < b){
            int temp = r;
            r = b;
            b = temp;
        }

        int max_needed = (r + b - 1) / b - 1;

        if(max_needed <= d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

