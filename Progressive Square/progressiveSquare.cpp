#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> input(n * n);
        for(int i = 0; i < n * n; i++){
            cin >> input[i];
        }

        sort(input.begin(), input.end());

        vector<int> expected;
        int start = input[0];

        vector<int> firstRow;
        for(int i = 0; i < n; i++){
            firstRow.push_back(start + i * c);
        }

        for(int i = 0; i < n; i++){
            int value = firstRow[i];
            for(int j = 0; j < n; j++){
                expected.push_back(value + j * d);
            }
        }

        sort(expected.begin(), expected.end());

        if(input == expected){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
