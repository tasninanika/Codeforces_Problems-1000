#include<iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, m;
        cin >> n >> m;

        ll g = gcd(n, m);
        n /= g;
        m /= g;

        int count3 = 0;
        while (n % 3 == 0) {
            count3++;
            n /= 3;
        }

        int count2 = 0;
        while(m % 2 == 0){
            count2++;
            m /= 2;
        }

        if(n == 1 && m == 1 && count2 <= count3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

