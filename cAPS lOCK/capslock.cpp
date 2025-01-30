#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        toupper(s[0]);
        tolower(s[i+1]);
    }

    cout << s << endl;


    return 0;
}
