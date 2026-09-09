#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> freq(100001, 0);
    for(int i = 0; i  < n; i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    vector<long long>dp(100001, 0);
    dp[1] = freq[1];
    for(int x = 2; x <= 100000; x++){
        long long notTAke = dp[x-1];
        long long take  = dp[x-2] + 1LL * x * freq[x];

        dp[x] = max(notTAke, take);


    }
     cout << dp[100000] << endl;
    return 0;
}