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



    return 0;
}
