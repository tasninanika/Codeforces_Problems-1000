#include<bits/stdc++.h>
using namespace atd;

int main(){
    int distance, numOfcity, pos, sum = 0;
    cin >> numOfcity >> pos;

    vector<int> arr(numOfcity + 1);

    for(distance = 1; distance <= numOfcity; distance++){
        cin >> arr[distance];
        sum += arr[distance];
    }

    for(distance = 1; distance < pos && distance <= numOfcity - pos; distance++){
        if(arr[pos + distance] + arr[pos - distance] == 1){

        }
    }


    return 0;
}
