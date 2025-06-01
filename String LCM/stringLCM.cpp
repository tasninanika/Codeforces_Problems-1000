#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int lena = a.size();
    int lenb = b.size();

    int gcd = __gcd(lena, lenb);
    int len = (lena * lenb) / gcd;


    string sa, sb;
    for(int i = 0; i < len / a.size(); i++){
        sa += a;
    }
    for (int i = 0; i < len / b.size(); i++){
        sb += b;
    }

    if(sa == sb){
        cout << sa << endl;
    }
    else{
        cout << sb << endl;
    }

}
