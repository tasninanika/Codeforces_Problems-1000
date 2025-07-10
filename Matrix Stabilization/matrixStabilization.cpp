#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        int a[102][102];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int up = a[i - 1][j];
                int down = a[i + 1][j];
                int left = a[i][j - 1];
                int right = a[i][j + 1];
                int maxNeighbour = max(max(up, down), max(left, right));
                int result = min(a[i][j], maxNeighbour);
                cout << result << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
