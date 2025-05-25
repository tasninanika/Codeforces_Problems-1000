#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long result = (n - 1) * n * (n + 1) / 6 + n;

    cout << result << endl;

    return 0;
}
