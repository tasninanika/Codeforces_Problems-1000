#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int p = 1;
        while(p * 2 < n){
            p *= 2;
        }

        for(int i = 1; i < p; i++){
            cout << i << " ";
        }

        cout << 0 << " ";

        for(int i = p; i < n; i++){
            cout << i;

            if( i != n - 1){
                cout << " ";
            }
        }
        cout << endl;    }

    return 0;
}
