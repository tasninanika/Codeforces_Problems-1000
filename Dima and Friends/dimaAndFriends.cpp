#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,sum;

    while(cin >> n){
        sum = 0;
        for(i=0;i < n; i++){
            cin >> m;
            sum += m;
        }
        int f = n+1, c = 0;

        for(i = sum + 1; i <= sum + 5; i++){
            if(i % f ==1 ){
                c++;
            }
        }
        cout << 5 - c << endl;
    }
    return 0;
}
