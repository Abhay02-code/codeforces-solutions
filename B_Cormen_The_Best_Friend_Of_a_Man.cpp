#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int added = 0;

    for (int i = 0; i < n - 1; i++) {

        if (a[i] + a[i + 1] < k) {

            int need = k - (a[i] + a[i + 1]);

            a[i + 1] += need;

            added += need;
        }
    }

    cout << added << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}