#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    string word = "hello";
    int j = 0;

    for(int i = 0; i < s.size(); i++){
            if(word[j] == s[i]){
                j++;
                if(j == word.size()){
                    cout << "YES" << endl;
                    return 0;
                }
            }
    }

    cout << "NO" << endl;

    return 0;
}
