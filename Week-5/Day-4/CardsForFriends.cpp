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
        ll a, b, n;
        cin >> a >> b >> n;

        ll x = 1, y = 1;
        while(a % 2 == 0){
            x *= 2;
            a /= 2;
        }
        while(b % 2 == 0){
            y *= 2;
            b /= 2;
        }

        ll ans = x * y;
        if(ans >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}