#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = -n; i <= n; i++){
        int top = n - abs(i);

        for(int j = 0; j < abs(i); j++){
            cout << "  ";
        }

        for(int j = 0; j < top; j++){
            cout << j << " ";
        }
        for(int j = top; j > 0; j--){
            cout << j << " ";
        }
        cout << 0 << endl;
    }

    return 0;
}
