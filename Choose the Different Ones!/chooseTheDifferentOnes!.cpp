#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(k + 1, 0);
        vector<int> b(k + 1, 0);

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x <= k){
                a[x] = 1;
            }
        }

        for(int i = 0; i < m; i++){
            int x;
            cin >> x;

            if(x <= k){
                b[x] = 1;
            }
        }

        int onlyA = 0, onlyB = 0, both = 0;
        int possible = 1;

        for(int i = 1; i <= k; i++){
            if(a[i] == 1 && b[i] == 1){
                both++;
            }
            else if(a[i] == 1){
                onlyA++;
            }
            else if(b[i] == 1){
                onlyB++;
            }
            else{
                possible = 0;
                break;
            }
        }

        if(possible == 1 && (onlyA + both >= k / 2) && (onlyB + both >= k / 2)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

