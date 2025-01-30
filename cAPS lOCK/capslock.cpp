#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 1; i < s.size(); i++){
        if(islower(s[i])){
            c++;
        }
    }
    if(islower(s[0] && c == 0)){
        s[0] = toupper(s[0]);
    }

    cout << s << endl;


    return 0;
}
