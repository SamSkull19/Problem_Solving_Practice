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
        ll n, m, k;
        cin >> n >> m >> k;

        ll a = (k + n - 1) / n;
        ll b = m - a + 1;

        ll ans = (a + b - 1) / b;
        cout << ans << endl;
    }
    return 0;
}