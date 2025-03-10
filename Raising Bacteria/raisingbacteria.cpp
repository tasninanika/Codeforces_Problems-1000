#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int c = 0;
    while(x > 0){
        if(x % 2 == 1){
            c++;
        }
        x /= 2;
    }

    cout << c << endl;

    return 0;
}
