#include<iostream>
using namespace std;

int main(){
    int s, n, c = 0;
    cin >> s >> n;

    int x[n], y[n];
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++){
        if(s > x[i]){
            c++;
            s += y[i];
        }
    }

    if(c == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
