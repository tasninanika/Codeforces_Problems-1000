#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int zero = count(str.begin(), str.end(), '0');
        int one = str.size() - zero;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '0') {
                if(one){
                    one--;
                }
                else{
                    break;
                }
            } else {
                if(zero){
                    zero--;
                }
                else{
                    break;
                }
            }
        }
        cout << zero + one << endl;
    }
    return 0;
}
