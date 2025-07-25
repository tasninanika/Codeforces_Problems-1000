#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int h0, m0;
    cin >> h0 >> m0;

    int maxCount = 1, currentCount = 1;

    for(int i = 1; i < n; i++){
        int h, m;
        cin >> h >> m;

        if(h == h0 && m == m0){
            currentCount++;
            if (currentCount > maxCount) maxCount = currentCount;
        }
        else{
            currentCount = 1;
        }

        h0 = h;
        m0 = m;
    }

    cout << maxCount;

    return 0;
}

