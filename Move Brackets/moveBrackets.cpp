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
            else{
                result--;
            }

            if(result < mini_num){
                mini_num = result;
            }
        }

        result = -result;
    }

    return 0;
}
