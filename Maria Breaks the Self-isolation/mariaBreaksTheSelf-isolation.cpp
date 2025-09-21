#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int max_attendees = 1;
        for(int i = 0; i < n; i++){
            if(a[i] <= (i + 1)){
                max_attendees = i + 2;
            }
        }
        cout << max_attendees << endl;
    }


    return 0;
}
