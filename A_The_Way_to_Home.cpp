#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;

    string s;
    cin>>s;

    int current = 0;
    int count = 0;

    while(current<n-1){
        bool found = false;
        for(int j = current+d; j > current; j--){
            if(j < n && s[j] == '1'){
                current = j;
                count++;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout<<count<<endl;

   
    return 0;
}