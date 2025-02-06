#include<iostream>
using namespace std;

int main(){
    int s, n, c = 0;
    cin >> s >> n;

    int x[n], y[n];
    for(int i = 0; i < n; i++){
        cin >> x[n] << y[n];
    }

    for(int i = 0; i < n; i++){
        if(s > x[i]){
            c++;
        }
    }

    return 0;
}
