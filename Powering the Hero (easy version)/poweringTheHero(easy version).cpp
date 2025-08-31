#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    if (!(cin >> t))
        return 0;
    while (t--) {
        int n;
        cin >> n;

        priority_queue<long long> pq;
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            long long x;
            cin >> x;
            if (x > 0) {
                pq.push(x);
            }
            else {
                if (!pq.empty()) {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
