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

        if (t_contains_a) {
            if (t.length() == 1) {
            cout << 1 << endl;
        }
            else {
                cout << -1 << endl;
            }
        }
        else {
            long long n = s.length();
            long long result = 1LL << n;

            cout << result << endl;
        }
    }


    return 0;
}
