#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        int cards = n / k;

        int joker = min(m, cards);

        int remainingJoker = m - joker;

        int maxJoker = (remainingJoker + (k - 2)) / (k - 1);
    }


    return 0;
}
