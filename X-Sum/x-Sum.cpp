#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }

        long long ans = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                long long sum = 0;

                for(int x = i, y = j; x < n && y < m; x++, y++){
                    sum += a[x][y];
                }
            }
        }

    }

    return 0;
}
