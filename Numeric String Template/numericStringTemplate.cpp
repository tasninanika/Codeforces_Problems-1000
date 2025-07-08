#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--) {
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO" << endl;
                continue;
            }

            map<int, char> num_to_char;
            map<char, int> char_to_num;
            bool isValid = true;

            for (int i = 0; i < n; i++) {
                int number = a[i];
                char letter = s[i];

                if ((num_to_char.count(number) && num_to_char[number] != letter) ||
                    (char_to_num.count(letter) && char_to_num[letter] != number)) {
                    isValid = false;
                    break;
                }

                num_to_char[number] = letter;
                char_to_num[letter] = number;
            }

            if (isValid) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
