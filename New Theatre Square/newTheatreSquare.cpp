#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        string grid[101];
        for(int i = 0; i < n; i++){
            cin >> grid[i];
        }

        int total_cost = 0;

        for(int i = 0; i < n; i++){
            int j = 0;

            while(j < m){
                if(grid[i][j] == '.'){
                    if(j + 1 < m && grid[i][j + 1] == '.' && y < 2 * x){

                    }
                }
            }
        }
    }

    return 0;
}
