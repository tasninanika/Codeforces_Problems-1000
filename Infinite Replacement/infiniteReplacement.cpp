#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s, T;
        cin >> s >> T;

        bool T_contains_a = false;
        for(size_t i = 0; i < T.length(); i++){
            if(T[i] == 'a'){
                T_contains_a = true;
                break;
            }
        }
    }


    return 0;
}
