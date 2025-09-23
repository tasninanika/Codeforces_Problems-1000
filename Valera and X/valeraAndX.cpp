#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> grid(n);
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }

    char diag_char = grid[0][0];
    char other_char = grid[0][1];

    if(diag_char == other_char){
        cout << "NO" << endl;
        return 0;
    }

    bool is_x = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            bool on_diag = (i == j) || (i + j == n - 1);

            if(on_diag){
                if(grid[i][j] != diag_char){
                    is_x = false;
                    break;
                }
            }
            else{
                if(grid[i][j] != other_char){
                    is_x = false;
                    break;
                }
            }
        }
        if(!is_x){
            break;
        }
    }



    return 0;
}
