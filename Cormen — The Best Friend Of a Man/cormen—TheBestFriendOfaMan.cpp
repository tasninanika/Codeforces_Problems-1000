#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int added_walks = 0;
    for(int i = 1; i < n; i++){
        int current_sum = b[i - 1] + b[i];

        if(current_sum < k){

        }
    }


    return 0;
}
