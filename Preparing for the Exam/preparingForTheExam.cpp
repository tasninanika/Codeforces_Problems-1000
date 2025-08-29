#include<bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<bool> known_questions(n + 1, false);

        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < k; i++){
            int q;
            cin >> q;
            known_questions[q] = true;
        }

        string result = "";
        for(int i = 0; i < m; i++) {
            int excluded_question = a[i];

            if(known_questions[excluded_question] == false) {
                result += '1';
            }
            else {
                result += '0';
            }
        }
        cout << result << endl;
    }

    return 0;
}
