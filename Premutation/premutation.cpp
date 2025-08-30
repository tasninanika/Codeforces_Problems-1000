#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> seq(n, vector<int>(n - 1));
        map<int, int> freq;

        for(int i = 0; i < n; i++){
            for (int j = 0; j < n - 1; j++) {
                cin >> seq[i][j];
            }
            freq[seq[i][0]]++;
        }

        int p1 = -1, p2 = -1;
        for(auto &[val, count] : freq){
            if (count == n - 1) p1 = val;
            else p2 = val;
        }

        vector<int> perm;
        perm.push_back(p1);
        for(int i = 0; i < n; i++){
            if (seq[i][0] == p2) {
                for (int x : seq[i]) perm.push_back(x);
                break;
            }
        }

        for(int i = 0; i < n; i++){
            cout << perm[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
