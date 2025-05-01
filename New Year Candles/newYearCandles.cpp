#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int c = a + (a / b);
    int total_hours = ((a / b) / b) + c;

    cout << total_hours << endl;

    return 0;
}
