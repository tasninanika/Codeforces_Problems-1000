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

            }
        }
    }


}
