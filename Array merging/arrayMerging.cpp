#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        map<int, int> freqA, freqB;

        int c = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                c++;
            }
            else{
                freqA[a[i - 1]] = max(freqA[a[i - 1]], c);
                c = 1;
            }
        }
        freqA[a[n - 1]] = max(freqA[a[n - 1]], c);

        c = 1;
        for(int i = 1; i < n; i++){
            if(b[i] == b[i - 1]){
                c++;
            }
            else{
                freqB[b[i - 1]] = max(freqB[b[i - 1]], c);
                c = 1;
            }
        }
        freqB[b[n - 1]] = max(freqB[b[n - 1]], c);

        int ans = 0;
        for(auto &p : freqA){
            ans = max(ans, p.second + freqB[p.first]);
        }
        for(auto &p : freqB){
            ans = max(ans, freqA[p.first] + p.second);
        }
    }

    return 0;
}
