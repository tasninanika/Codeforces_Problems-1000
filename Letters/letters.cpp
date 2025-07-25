#include<iostream>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    long long a[n + 1];
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }

    long long t = 1, sum = 0;
    for(long long i = 0; i < m; i++){
        long long x;
        cin >> x;

        while(sum + a[t] < x){
            sum += a[t];
            t++;
        }
        cout << t << " " << (x - sum) << endl;
    }
    return 0;
}

