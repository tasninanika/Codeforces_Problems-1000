#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    map <string, string> t;
    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        t[a] = b;
    }


    return 0;
}
