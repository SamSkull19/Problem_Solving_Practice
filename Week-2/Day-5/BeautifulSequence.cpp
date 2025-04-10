#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int MOD = 998244353;

int add(int x, int y){
    return (x + y) % MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> dp(4, 0);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;

            if(x == 1) dp[1] = add(dp[1], 1);
            else if(x == 2) dp[2] = add(dp[2], add(dp[1], dp[2]));
            else dp[3] = add(dp[3], dp[2]);
        }
        cout << dp[3] << endl;
    }
    return 0;
}