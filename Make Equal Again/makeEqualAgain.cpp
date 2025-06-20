#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[200000];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int left = 0;
        int right = n - 1;
        int start = arr[left];
        int e = arr[right];

        while (left < n - 1 && arr[left] == start) {
            left++;
        }

        while (right > 0 && arr[right] == e) {
            right--;
        }

        if (start == e) {
            int len = right - left + 1;
            if (len < 0) len = 0;
            cout << len << endl;
        } else {
            int r = max(left, n - right - 1);
            cout << n - r << "\n";
        }
    }

    return 0;
}
