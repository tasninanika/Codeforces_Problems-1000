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
    for(int i = 0; i < len / lena; i++){
        sa += a;
    }
    for (int i = 0; i < len / lenb; i++){
        sb += b;
    }

    if(sa == sb){
        cout << sa << endl;
    }
    else{
        cout << -1 << endl;
    }

}
