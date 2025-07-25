#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        string str;
        cin >> str;

        int c = 0;
        for(int i = 0; i < n - 1; i++){
            if(str[i] != str[i + 1]){
                c++;
            }
        }

        int result;
        if(b >= 0){
            result = a * n + b * n;
        }
        else{
            result = a * n + b * (c / 2 + 1);
        }

        cout << result << endl;
    }
    return 0;
}
