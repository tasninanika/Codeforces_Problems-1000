#include<iostream>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int result = min(n - a, b + 1);

    cout << result << endl;


    return 0;
}
