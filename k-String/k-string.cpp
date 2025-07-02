#include<iostream>
using namespace std;

int main(){
    int k;
    string s;
    cin >> k >> s;

    int c[26] = {0};

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        c[ch - 'a'] += 1;
    }

    string part = "";
    for(int i = 0; i < 26; i++){
        if(c[i] % k != 0){
            cout << -1 << endl;
            return 0;
        }
    }

    return 0;
}
