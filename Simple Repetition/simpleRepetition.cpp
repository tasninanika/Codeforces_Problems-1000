#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        int k;
        cin >> n >> k;

        bool isPrime = true;

        if(k == 1){
            if (n < 2) isPrime = false;
            else if(n == 2)
             isPrime = true;
            else if(n % 2 == 0)
             isPrime = false;
            else{
                for(long long i = 3; i * i <= n; i += 2){
                    if (n % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
        }
        else if(n != 1){
            isPrime = false;
        }
        else{
            long long number = 0;
            for(int i = 0; i < k; ++i){
                number = number * 10 + 1;
            }

            if(number < 2)
                isPrime = false;
            else if(number == 2)
             isPrime = true;
            else if(number % 2 == 0)
             isPrime = false;
            else{
                for(long long i = 3; i * i <= number; i += 2){
                    if(number % i == 0){
                        isPrime = false;
                        break;
                    }
                }
            }
        }

        cout << (isPrime ? "YES" : "NO") << '\n';
    }

    return 0;
}
