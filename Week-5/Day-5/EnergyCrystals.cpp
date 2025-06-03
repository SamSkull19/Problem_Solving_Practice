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
        ll x;
        cin >> x;

        ll k = log2(x);
        ll ans = (1LL * 2 * k) + 3;
        cout << ans << endl;
    }
    return 0;
}