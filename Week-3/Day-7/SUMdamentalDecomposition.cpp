#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        if(n == 1){
            if(x == 0){
                cout << -1 << endl;
            }
            else{
                cout << x << endl;
            }
            continue;
        }

        int y = __builtin_popcount(x);
        if(y > n){
            cout << x << endl;
            continue;
        }

        int ans = x + (n - y);
        if((n - y) % 2){
            if(x == 0 || x == 1){
                ans += 3;
            }
            else{
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}