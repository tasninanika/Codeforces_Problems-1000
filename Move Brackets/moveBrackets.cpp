#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = 0;
        int mini_num = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                result++;
            }
        }
    }

    return 0;
}
