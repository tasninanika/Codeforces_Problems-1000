#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> result(n);
    int smaller_ptr = 0;
    int larger_ptr = (n + 1) / 2;

    int result_ptr = 0;
    while (result_ptr < n) {
        if (larger_ptr < n) {
            result[result_ptr] = a[larger_ptr];
            larger_ptr++;
            result_ptr++;
        }
        if (smaller_ptr < (n + 1) / 2) {
            result[result_ptr] = a[smaller_ptr];
            smaller_ptr++;
            result_ptr++;
        }
    }

    int cheap_count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (result[i] < result[i - 1] && result[i] < result[i + 1]) {
            cheap_count++;
        }
    }

    cout << cheap_count << endl;
    for (int i = 0; i < n; ++i) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}

