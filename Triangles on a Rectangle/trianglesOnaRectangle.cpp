#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long w, h;
        cin >> w >> h;

        int k1;
        cin >> k1;

        vector<long long> x1(k1);
        for(int i = 0; i < k1; i++){
            cin >> x1[i];
        }

        long long base1 = x1.back() - x1.front();
        max_doubled_area = max(max_doubled_area, base1 * h);

        int k2;
        cin >> k2;

        vector<long long> x2(k2);
        for(int i = 0; i < k2; i++){
            cin >> x2[i];
        }
        long long base2 = x2.back() - x2.front();
        max_doubled_area = max(max_doubled_area, base2 * h);
    }


    return 0;
}
