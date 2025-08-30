#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> sequences(n, vector<int>(n - 1));
        map<int, int> first_element_counts;

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n - 1; j++){
                cin >> sequences[i][j];
            }
            first_element_counts[sequences[i][0]]++;
        }

        vector<int> p(n);
        int second_element = 0;
        int first_element = 0;

        for(const auto& pair : first_element_counts){
            if(pair.second == n - 1){
                second_element = pair.first;
            }
            else{
                first_element = pair.first;
            }
        }

        p[0] = first_element;
        p[1] = second_element;

        vector<int> first_original_sequence;
        for(int i = 0; i < n; i++){
            if (sequences[i][0] == second_element) {
                first_original_sequence = sequences[i];
                break;
            }
        }

        for(int i = 2; i < n; i++){
            p[i] = first_original_sequence[i - 1];
        }

        for(int i = 0; i < n; i++){
            cout << p[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
