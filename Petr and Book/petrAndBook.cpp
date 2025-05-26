#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[7];
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }

    int t = a[0];

    while(t < n){
        i++;
        day++;
        if(day == 7){
            day = 0;
        }
    }

    cout << day + 1 << endl;


    return 0;
}
