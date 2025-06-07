#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;

    vector<long long> a;
    for(long long i = n + 1; ; i++){
        int isPrime = 1;

        for(long long j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if(isPrime){
            a.push_back(i);
            break;
        }
    }

    for(long long i = a.back() + n; ; i++){
        int isPrime = 1;
        for(long long j = 2; j * j <= i; j++){
            if(i % j == 0){

            }
        }
    }


    return 0;
}
