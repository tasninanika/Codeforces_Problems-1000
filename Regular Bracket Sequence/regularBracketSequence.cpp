#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          string s;
          cin >> s;

          int n = s.size();
          if(n % 2){
            cout << "NO";
          }
          else {
               if(s[0]==')' || s[n-1]=='('){
                cout<<"NO";
               }
               else{
                cout << "YES";
               }

          }

          cout << endl;
     }
}
