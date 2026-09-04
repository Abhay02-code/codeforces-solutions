#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 != 0) {
        cout << 0 << endl;
    } else {
        cout << (1LL << (n / 2)) << endl;
    }

    return 0;
}