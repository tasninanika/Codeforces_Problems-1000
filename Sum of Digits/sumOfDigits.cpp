#include<iostream>
using namespace std;

int main(){
    string number;
    cin >> number;

    int steps = 0;

    while(number.length() > 1){
        int sum = 0;

        for(char digit : number){
            sum += digit - '0';
        }

        number = to_string(sum);
        steps++;
    }

    cout << steps << endl;
    return 0;
}
