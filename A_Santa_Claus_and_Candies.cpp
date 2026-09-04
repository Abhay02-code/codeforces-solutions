#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ans;
    int sum = 0;

    for (int i = 1; sum + i <= n; i++) {
        ans.push_back(i);
        sum += i;
    }

    // Add remaining value to the last element
    ans.back() += n - sum;

    cout << ans.size() << endl;

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}