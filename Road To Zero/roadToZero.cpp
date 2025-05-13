#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    long long x, y, a, b;

    while(t--){
        cin >> x >> y >> a >> b;

        if(x > y){
            swap(x, y);
        }
        long long ans1 = 0, ans2 = 0;
        ans1 = x * a + y * a;
        long long z = y - x;
        ans2 = z * a + x * b;

        cout << min(ans1, ans2) << endl;
    }


    return 0;
}
