#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        int zero = 0, one = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                zero++;
            }
            else{
                one++;
            }
        }

        int removePairs = min(zero, one);
        int remaining = s.size() - 2 * removePairs;
    }


    return 0;
}
