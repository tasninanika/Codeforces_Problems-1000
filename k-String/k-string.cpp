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

    return 0;
}
