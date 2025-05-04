#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    int s = pow(10, n - 1);
    int e = pow(10, n);

    for(int i = s; i < e; i++){
        if(i % t == 0){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;


    return 0;
}
