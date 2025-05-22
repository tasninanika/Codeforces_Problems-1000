#include<iostream>
using namespace std;

int main(){
    long long n, m, ans = 0;
    cin >> n >> m;

    if(n == m){
        cout << 0 << endl;
    }
    else if(m % n != 0){
        cout << -1 << endl;
    }

    return 0;
}
