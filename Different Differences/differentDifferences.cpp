#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> result;
        result.push_back(1);

        int current_diff = 1;
        while (result.size() < k) {
            int next_val = result.back() + current_diff;

            if (next_val + (k - (result.size() + 1)) <= n) {
                result.push_back(next_val);
                current_diff++;
            }
            else {
                result.push_back(result.back() + 1);
            }
        }
    }
    if (!result.empty()) {
        cout << result[0];
        for (int i = 1; i < result.size(); i++) {
                cout << " " << result[i];
        }
    }


    return 0;
}
