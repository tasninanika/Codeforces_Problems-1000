#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        long long arr[n];
        long long sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        long long avg = sum / n;

        int i;
        for(i = 0; i < n - 1; i++) {
            if (arr[i] < avg) {
                break;
            }
            arr[i + 1] += arr[i] - avg;
            arr[i] = avg;
        }

        if(i == n - 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
