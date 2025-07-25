#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        string str;
        cin >> str;

        int segment = 1;
        for(int i = 1; i < n; i++){
            if (str[i] != str[i - 1]) {
                segment++;
            }
        }

        int ans;
        if (b >= 0)
            ans = n * (a + b);
        else
            ans = n * a + b * ((segment + 1) / 2);

        cout << ans << endl;
    }
    return 0;
}
