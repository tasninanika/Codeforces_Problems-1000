#include<bits/bits/stdc++.h
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        string lower = " ", upper = " ";

        for(int i = 0; i < (int)str.size; i++){
            char c = str[i];

            if(islower(c)){
                if(c == 'b' && !lower.empty()){
                    lower.pop_back();
                }
                else if(c != 'b'){
                    lower.push_back(c);
                }
            }
            else{
                if(c == 'B' && !upper.empty()){
                    upper.pop_back();
                }
                else if(c != 'B'){
                    upper.push_back(c);
                }
            }
        }

        string ans = "";
        int i = 0, j = 0;
        for(int k = 0; k < (int)str.size(); k++){
            if(i < (int)lower.size() && str[k] == lower[i]){
                ans.push_back(lower[i]);
                i++;
            }
            else if(j < (int)upper.size() && str[k] == upper[j]){

            }
        }
    }


    return 0;
}
