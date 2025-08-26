#include<iostream>
using namespace std;

int main(){
    int t;
    cin << t;

    while(t--){
        int n;
        long long p;
        cin >> n >> p;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<long long> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        vector<int> indices(n);
        iota(indices.begin(), indices.end(), 0);

        sort(indices.begin(), indices.end(), [&](int i, int j) {
            return b[i] < b[j];
        });

        long long total_cost = p;
        long long remaining_residents = n - 1;

        for(int i = 0; i < n && remaining_residents > 0; ++i){
            int idx = indices[i];

            if(b[idx] >= p){
                total_cost += remaining_residents * p;
                remaining_residents = 0;
                break;
            }
        }

    }


    return 0;
}
