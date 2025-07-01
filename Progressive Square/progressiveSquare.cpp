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
    }


    return 0;
}
