#include<iostream>
using namespace std;

int main(){



    string a, b;
    cin >> a >> b;

    int len = lcm(a.size(), b.size());

    string sa, sb;
    for(int i = 0; i < len / a.size(); i++){
        sa += a;
    }
    for (int i = 0; i < len / b.size(); i++){
        sb += b;
    }

    if(sa == sb){

    }

}
