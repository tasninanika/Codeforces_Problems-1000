#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long int a, b;
        cin >> a >> b;

        if(b == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            long long int sum = (a * b * 2);
            long long int y = sum - a;
            cout << a << " " << y << " " << sum << endl;
        }
    }
    return 0;
}
