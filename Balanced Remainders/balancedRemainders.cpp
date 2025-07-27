#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int c[3] = {0, 0, 0};
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            c[x % 3]++;
        }

        int moves = 0;
        while(true){
            for(int i = 0; i < 3; i++){
                if(c[i] > n / 3){
                    int diff = c[i] - n / 3;
                    c[(i + 1) % 3] += diff;
                    moves += diff;
                    c[i] -= diff;
                }
            }
            bool balanced = true;
            for(int i = 0; i < 3; i++){
                if(c[i] != n / 3){
                    balanced = false;
                }
            }
            if(balanced)
                break;
        }
    }


    return 0;
}
