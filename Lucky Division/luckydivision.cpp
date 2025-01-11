#include<iostream>
using namespace std;

int main(){
    long long n, c = 0;
    cin >> n;

    string s = to_string(n);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            c++;
        }
    }
    if(s.size() == c){
        cout << "YES" << endl;
    }


    return 0;
}

