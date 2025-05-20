#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> candies(n);
    int maxTurns = 0, winnerIndex = 0;

    for(int i = 0; i < n; i++){
        cin >> candies[i];

        int turns = (candies[i] + m - 1) / m;

        if (turns >= maxTurns) {
            maxTurns = turns;
            winnerIndex = i + 1;
        }
    }


    return 0;
}
