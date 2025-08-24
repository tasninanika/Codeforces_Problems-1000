#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n;

    vector<int> bars;
    map<int, int> counts;

    for(int i = 0; i < n; i++){
        cin >> t;
        bars.push_back(t);
    }

    sort(bars.begin(), bars.end());
    int max = 1;
    int v = bars[0];
    counts[v] = 1;

    return 0;
}
