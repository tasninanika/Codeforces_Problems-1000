#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n % 2 == 1){
        cout << 0 << endl;
    }
    else{
        long long ans = pow(2, n / 2);
        cout << ans << endl;
    }


    return 0;
}
