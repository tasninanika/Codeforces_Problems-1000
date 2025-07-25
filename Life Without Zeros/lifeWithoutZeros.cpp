#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = a + b;
    int A = 0, B = 0, C = 0;
    int powA = 1, powB = 1, powC = 1;
    int temp = a;

    while (temp > 0) {
        int d = temp % 10;
        temp /= 10;
        if (d != 0) {
            A += d * powA;
            powA *= 10;
        }
    }
    temp = b;
    while (temp > 0) {
        int d = temp % 10;
        temp /= 10;

        if (d != 0) {
            B += d * powB;
            powB *= 10;
        }
    }
    temp = c;
    while (temp > 0) {
        int d = temp % 10;
        temp /= 10;

        if (d != 0) {
            C += d * powC;
            powC *= 10;
        }
    }
    if (A + B == C)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}

