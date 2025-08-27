#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long w, h;
        cin >> w >> h;

        long long max_doubled_area = 0;

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

        int k3;
        cin >> k3;

        vector<long long> y1(k3);
        for(int i = 0; i < k3; i++){
            cin >> y1[i];
        }
        long long base3 = y1.back() - y1.front();
        max_doubled_area = max(max_doubled_area, base3 * w);

        int k4;
        cin >> k4;

        vector<long long> y2(k4);
        for(int i = 0; i < k4; i++){
            cin >> y2[i];
        }

        long long base4 = y2.back() - y2.front();
        max_doubled_area = max(max_doubled_area, base4 * w);

        cout << max_doubled_area << endl;
    }


    return 0;
}
