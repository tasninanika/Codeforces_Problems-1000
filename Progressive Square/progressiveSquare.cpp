#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> v(n * n);

        for(int i = 0; i < n * n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<int> temp;
        int start = v[0];

        vector<int> firstRow;
        for(int i = 0; i < n; i++){
            firstRow.push_back(start + i * c);
        }

        for(int i = 0; i < n; i++){
            int value = firstRow[i];

            for(int j = 0; j < n; j++){
                v.push_back(value + j * d);
            }
        }

        sort(firstRow.begin(), firstRow.end());

        if(v == firstRow){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
