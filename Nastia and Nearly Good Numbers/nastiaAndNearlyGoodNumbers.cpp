#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b;
        cin >> a >> b;

        if(b == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            long long sum = (a * b * 2);
        }
    }


    return 0;
}
