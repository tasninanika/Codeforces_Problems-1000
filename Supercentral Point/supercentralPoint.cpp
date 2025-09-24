#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> points(n);
    for(int i = 0; i < n; i++){
        cin >> points[i].first >> points[i].second;
    }

    int supoercentral_count = 0;
    for(int i = 0; i < n; i++){
        bool has_left = false;
        bool has_right = false;
        bool has_lower = false;
        bool has_upper = false;

        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(points[j].first < points[i].first && points[j].second == points[i].second){
                has_left = true;
            }
            if(points[j].first > points[i].first && points[j].second == points[i].second){
                has_right = true;
            }
            if(points[j].first == points[i].first && points[j].second < points[i].second){
                has_lower = true;
            }
            if(points[j].first == points[i].first && points[j].second > points[i].second){
                has_upper = true;
            }
        }
        if(has_left && has_right && has_lower && has_upper){
            supercentral_count++;
        }
    }
    cout << supercentral_count << endl;


    return 0;
}
