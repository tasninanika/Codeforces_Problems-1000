#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long sumA = 0, maxA = 0;
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;

            sumA += x;
            if(sumA > maxA){
                maxA = sumA;
            }
        }

        int m;
        cin >> m;

        long long sumB = 0, maxB = 0;
        for(int i = 0; i < m; i++){
            long long x;
            cin >> x;

            sumB += x;
            if(sumB > maxB){
                maxB = sumB;
            }
        }

        cout << maxA + maxB << endl;
    }

    return 0;
}
