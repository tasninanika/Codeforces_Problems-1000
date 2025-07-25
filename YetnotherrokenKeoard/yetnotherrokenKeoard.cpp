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
    }


    return 0;
}
