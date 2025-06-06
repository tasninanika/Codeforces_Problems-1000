#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> mins;
        vector<int> seconds;
        long long sum = 0;

        for(int i = 0; i < n; i++){
            int m;
            cin >> m;
            vector<int> a(m);
            for(int j = 0; j < m; j++){
                cin >> a[j];
            }

            sort(a.begin(), a.end());
            mins.push_back(a[0]);
            seconds.push_back(a[1]);
            sum += a[1];
        }

        int minOfMins = *min_element(mins.begin(), mins.end());
        int minOfSeconds = *min_element(seconds.begin(), seconds.end());
    }

    return 0;
}
