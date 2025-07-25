#include<bits/stdc++.h>
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

        char cur = str.front();

        for (int i = 0; i < n; i++){
            if (str[i] != str.front()){
                if(cur == str.front())
                    segment++, cur = str[i];
            }
            else
                cur = str.front();
        }

        int ans = 0;
        if(b >= 0)
            ans = n * (a + b);
        else
            ans = n * a + b * segment;
        cout << ans << endl;
    }
    return 0;
}
