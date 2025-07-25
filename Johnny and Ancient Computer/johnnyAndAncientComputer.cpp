#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b;
        cin >> a >> b;

        int steps = 0;

        if(a == b){
            cout << 0 << endl;
            continue;
        }

        while(a > b){
            if(a % 8 == 0 && a / 8 >= b){
                a /= 8;
                steps++;
            }
            else if(a % 4 == 0 && a / 4 >= b){
                a /= 4;
                steps++;
            }
            else if(a % 2 == 0 && a / 2 >= b){
                a /= 2;
                steps++;
            }
            else{
                break;
            }
        }

        while(a < b){
            if(a * 8 <= b){
                a *= 8;
                steps++;
            }
            else if(a * 4 <= b){
                a *= 4;
                steps++;
            }
            else if(a * 2 <= b){
                a *= 2;
                steps++;
            }
            else{
                break;
            }
        }

        if(a == b){
            cout << steps << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}

