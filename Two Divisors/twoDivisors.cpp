#include<iostream>
using namespace std;

long gcd(long a, long b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long a, b;
        cin >> a >> b;

        long g = gcd(a, b);

        long result;
        if(b % a != 0){
            result = (a / g) * b;
        }
        else{
            result = b;
        }

        cout << result << endl;
    }

    return 0;
}


