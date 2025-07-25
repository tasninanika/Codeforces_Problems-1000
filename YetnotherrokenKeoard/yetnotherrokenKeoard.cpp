#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        vector<pair<char, int>> lower, upper;

        for(int i = 0; i < (int)str.size(); i++){
            char c = str[i];

            if (islower(c)) {
                if (c == 'b' && !lower.empty()) {
                    lower.pop_back();
                }
                else if (c != 'b') {
                    lower.push_back({c, i});
                }
            }
            else {
                if (c == 'B' && !upper.empty()) {
                    upper.pop_back();
                }
                else if (c != 'B') {
                    upper.push_back({c, i});
                }
            }
        }

        vector<pair<char, int>> ans;
        for (int i = 0; i < (int)lower.size(); i++)
            ans.push_back(lower[i]);
        for (int i = 0; i < (int)upper.size(); i++)
            ans.push_back(upper[i]);

        sort(ans.begin(), ans.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second < b.second;
        });

        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i].first;
        }
        cout << endl;
    }
    return 0;
}
