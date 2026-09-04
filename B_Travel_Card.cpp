#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    vector<int> dp(n + 1, 0);

    int p90 = 0;
    int p1440 = 0;

    for (int i = 0; i < n; i++) {

        while (t[i] - t[p90] >= 90) {
            p90++;
        }

     
        while (t[i] - t[p1440] >= 1440) {
            p1440++;
        }

     
        int oneTrip = dp[i] + 20;
        int ticket90 = dp[p90] + 50;
        int ticketDay = dp[p1440] + 120;

        dp[i + 1] = min({oneTrip, ticket90, ticketDay});

        cout << dp[i + 1] - dp[i] << '\n';
    }

    return 0;
}