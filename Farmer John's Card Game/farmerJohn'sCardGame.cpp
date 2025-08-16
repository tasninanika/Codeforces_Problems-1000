#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cards(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end());
        }

        vector<pair<int,int>> cows;
        for(int i = 0; i < n; i++){
            cows.push_back({cards[i][0], i+1});
        }

        sort(cows.begin(), cows.end());

        for(int i = 0; i < n; i++){
            cout << cows[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}

