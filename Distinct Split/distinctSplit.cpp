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

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            leftFreq[ch]++;
            rightFreq[ch]--;

            if (rightFreq[ch] == 0) {
                rightFreq.erase(ch);
            }

            long long totalUnique = leftFreq.size() + rightFreq.size();

    }

    return 0;
}

