#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int sumA = 0;
        int maxB = 0;
        int ans = 0;

        for(int i = 0; i < n && i < k; i++){
            sumA += a[i];

            if(b[i] > maxB){
                maxB = b[i];
            }

            int current = sumA + (k - i - 1) * maxB;

            if(current > ans){
                ans = current;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

