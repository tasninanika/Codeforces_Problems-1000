#include<iostream>
using namespace std;

int main(){
    int n, m, c = 0;
    cin >> n >> m;

    int arr[m];
    for(int i = 0; i < m; i++){
        cin >> arr[m];
    }

    for(int i = 0; i < m - 1; i++){
        if(arr[i] > arr[i+1]){
            c += n - (arr[i] - arr[i+1]);
        }
        else if(arr[i] < arr[i+1]){
            c += arr[i+1] - arr[i];
        }
    }

    return 0;
}
