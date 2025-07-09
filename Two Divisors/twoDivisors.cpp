#include<iostream>
using namespace std;

long gcd(long a, long b){
    while(b != 0){
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
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
            result = (b / g) * b;
        }

        cout << result << endl;
    }

    return 0;
}
