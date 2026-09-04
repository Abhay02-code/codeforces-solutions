#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] > 0) {
            ans += a[i] - 1;
        }
        else if (a[i] < 0) {
            ans += abs(a[i] + 1);
            negative++;
        }
        else {
            ans += 1;
            zero++;
        }
    }

    if (negative % 2 != 0 && zero == 0) {
        ans += 2;
    }

    cout << ans << endl;

    return 0;
}