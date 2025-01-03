#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, result = "";
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        char letter = tolower(s[i]);
        if(letter == 'a' || letter == 'o' || letter == 'y' || letter == 'e' || letter == 'u' || letter == 'i'){
            continue;
        }
        else{
           result += ".";
           result += letter;

        }
    }
    cout << result << endl;
    return 0;
}
