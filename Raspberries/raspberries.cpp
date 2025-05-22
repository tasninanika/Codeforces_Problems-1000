#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int maxMod = 0;
        int evenCount = 0;
        int divisible = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            int r = x % k;

            if(r == 0){
                divisible = 1;
            }
            else{
                if(r > maxMod){
                    maxMod = r;
                }
            }

            if(r == 2){
                evenCount++;
            }
        }

        if(divisible == 1){
            cout << 0 << endl;
        }
        else if(k == 4){
            if(evenCount >= 2){
                cout << 0 << endl;
            }
            else if(evenCount == 1 || maxMod == 3){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
        else{
            cout << k - maxMod << endl;
        }
    }

    return 0;
}
