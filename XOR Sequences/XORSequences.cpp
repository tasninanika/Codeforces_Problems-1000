#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        int xor_result = x ^ y;
        int k = 0;

        while((xor_result & 1) == 0){
            xor_result >>= 1;
            k++;
        }

        long long result = 1LL << k;
    }

    return 0;
}
