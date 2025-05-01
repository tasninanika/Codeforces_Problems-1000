#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int candle = a;
    int total_hours = a;

    while(candle >= b){
        int new_candles = candle / b;
        total_hours += new_candles;
        candle = new_candles + (candle % b);

    }

    cout << total_hours << endl;

    return 0;
}
