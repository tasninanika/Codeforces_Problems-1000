#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[7];
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }

    int day = 0;
    int done = 0;

    while(done < n){
        done += a[day];
        day++;
        if(day == 7){
            day = 0;
        }
    }

    cout << day + 1 << endl;


    return 0;
}
