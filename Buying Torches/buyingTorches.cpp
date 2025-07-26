#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;

        long long coal = y * k;
        long long sticks = coal + (k - 1);

        long long div = (sticks + (x - 2)) / (x - 1);
        long long ans = div + k;

        cout << ans << endl;
    }
    return 0;
}

