#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n % 2 == 1){
            cout << "NO" << endl;
            continue;
        }

        bool found = false;
        if(n % 2 == 0){
            long long x = sqrt(n / 2);
            for(long long i = x - 10; i <= x + 10; i++){
                if(i >= 0 && i * i == n / 2){
                    found = true;
                    break;
                }
            }
        }
        if(!found && n % 4 == 0){
            long long x = sqrt(n / 4);
            for(long long i = x - 10; i <= x + 10; i++){
                if(i >= 0 && i * i == n / 4){
                    found = true;
                    break;
                }
            }
        }
    }

    return 0;
}
