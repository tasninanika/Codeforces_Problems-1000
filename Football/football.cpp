#include <iostream>
using namespace std;

int main() {

    int n, c1 = 0, c2 = 0;
    cin >> n;

    string teams[n];
    for(int i = 0; i < n; i++){
        cin >> teams[i];

    }

    string team1 = teams[0], team2 = " ";

    for(int i = 0; i < n; i++){
        if(teams[0] == team1){
            c1++;
        }
        else{
            team2 = teams[i];
            c2++;
        }
    }

    if(c1 > c2){
        cout << team1 << endl;
    }
    else{
        cout << team2 << endl;
    }

    return 0;
}

