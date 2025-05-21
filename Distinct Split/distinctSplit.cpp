#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        string s;
        cin >> s;

        map<char, long long> rightFreq;
        for (int i = 0; i < n; i++) {
            rightFreq[s[i]]++;
        }

        map<char, long long> leftFreq;
        long long maxUnique = 0;

    }

    return 0;
}

