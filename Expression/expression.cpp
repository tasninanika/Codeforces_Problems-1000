#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int r1, r2, r3, r4, r5, r6;

    r1 = a + b + c;
    r2 = a + b * c;
    r3 = a * b + c;
    r4 = (a + b) * c;
    r5 = a * (b + c);
    r6 = a * b * c;

    if(r1>r2 && r1>r3 && r1>r4 && r1>r5 && r1>r6){
        cout << r1 << endl;
    }
    else if(r2>r1 && r2>r3 && r2>r4 && r2>r5 && r2>r6){
        cout << r2 << endl;
    }
    else if(r3>r1 && r3>r2 && r3>r4 && r3>r5 && r3>r6){
        cout << r3 << endl;
    }
    else if(r4>r1 && r4>r2 && r4>r3 && r4>r5 && r4>r6){
        cout << r4 << endl;
    }
    else if(r5>r1 && r5>r2 && r5>r3 && r5>r4 && r5>r6){
        cout << r5 << endl;
    }
    else{
        cout << r6 << endl;
    }

    return 0;
}
