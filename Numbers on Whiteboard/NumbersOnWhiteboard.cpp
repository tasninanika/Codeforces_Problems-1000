#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        priority_queue<long long> pq;
        for(long long i = n; i >= 1; i--) {
            pq.push(i);
        }

        cout << 2 << endl;

        while(pq.size() > 1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();

            cout << a << " " << b << endl;

            long long c = a + b;
            if (c % 2 != 0)
                c++;
            c /= 2;
            pq.push(c);
        }
    }

    return 0;
}

