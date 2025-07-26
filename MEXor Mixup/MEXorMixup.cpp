#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int x;
        if((a - 1) % 4 == 0)
            x = a - 1;
        else if((a - 1) % 4 == 1)
            x = 1;
        else if((a - 1) % 4 == 2)
            x = a;
        else
            x = 0;

        if(x == b){
            cout << a << endl;
        }
        else{
            int ans = x ^ b;
            if (ans == a)
                cout << a + 2 << endl;
            else
                cout << a + 1 << endl;
        }
    }
    return 0;
}

