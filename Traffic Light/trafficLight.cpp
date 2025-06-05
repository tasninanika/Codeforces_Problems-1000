#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x = 0, ans = -1, p = 0, k = 0;

        char ch;
        string s;
        cin >> n >> ch >> s;

        bool f = 0, f1 = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ch && !f){
                x = i;
                f = 1;
            }
            if(f && s[i] == 'g'){
                ans = max(ans, (i - x));
                f = 0;
            }
            if(f1 && s[i] == 'g'){
                f1 = 0;
                k = i;
            }
        }

        if(f){
            ans = max(ans, (n - x + k));
        }

        cout << ans << endl;
    }


    return 0;
}
