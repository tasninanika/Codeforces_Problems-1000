#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1 = 0, c2 = 0;

    for(int i = 1; i < s.size(); i++){
        if(islower(s[i])){
            c1++;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            c2++;
        }
    }

    if(islower(s[0]) && c1 == 0){
        s[0] = toupper(s[0]);
        for(int i = 1; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }

        cout << s << endl;
    }
    else if( c2 == s.size()){
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else{
        cout << s << endl;
    }




    return 0;
}
