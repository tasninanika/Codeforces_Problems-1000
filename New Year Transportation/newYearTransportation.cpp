#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int c = 1;
    for(int i = 0; i < t; i++){
        c += a[i];
    }

    if(c == t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
