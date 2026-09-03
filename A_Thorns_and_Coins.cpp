#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;

        for (int i = 0; i < n; i++) {

            
            if (s[i] == '@') {
                count++;
            }

            if (s[i] == '*' && i + 1 < n && s[i + 1] == '*') {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}