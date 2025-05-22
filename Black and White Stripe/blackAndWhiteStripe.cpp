#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<long long> preSum(n + 1);

    for (int i = 1; i <= n; i++){
        long long curr = 0;
        if (s[i - 1] == 'W'){
            curr = 1;
        }


    }

    return 0;
}
