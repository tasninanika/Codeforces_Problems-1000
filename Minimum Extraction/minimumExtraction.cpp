#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if(n == 1){
            cout << a[0] << endl;
            continue;
        }

        long long max_min = a[0];
        for(int i = 1; i < n; i++){
            max_min = max(max_min, a[i] - a[i - 1]);
        }

        cout << max_min << endl;
    }

    return 0;
}
