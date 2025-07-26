#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int rem[1000];
        for(int i = 0; i < n - 1; i++){
            cin >> rem[i];
        }

        int ans[1000];
        ans[0] = 1000;

        for(int i = 0; i < n - 1; i++){
            ans[i + 1] = ans[i];
        }

        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
