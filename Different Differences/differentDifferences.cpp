#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t, n, k, i, j, diff;
    cin >> t;

    while(t--){
        cin >> k >> n;

        j = 1;
        diff = 1;

        for(i = 1; i <= k; i++){
            cout << j << " ";

            if(n - (j + diff) >= (k - i - 1)){
                j = j + diff;
                diff++;
            }
            else{
                j++;
            }
        }

        cout << endl;
    }
}
