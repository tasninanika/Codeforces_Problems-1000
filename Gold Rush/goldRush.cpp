#include<iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
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

        int c3 = 0;
        while(n % 3 == 0){
            c3++;
            n /= 3;
        }

        int c2 = 0;
        while(m % 2 == 0){
            c2++;
            m /= 2;
        }

        if(n == 1 && m == 1 && c2 <= c3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

