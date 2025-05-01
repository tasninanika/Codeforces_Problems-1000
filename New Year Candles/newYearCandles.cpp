#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int c = a + (a / b);
    int total_candles = ((a / b) / b) + c;

    cout << total_candles << endl;

    return 0;
}
