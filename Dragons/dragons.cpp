#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, n, c = 0;
    cin >> s >> n;

    pair <int,int> a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(s < a[i].first){
            c++;
            break;
        }
        else{
            s += a[i].second;
        }
    }

    if(c > 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}
