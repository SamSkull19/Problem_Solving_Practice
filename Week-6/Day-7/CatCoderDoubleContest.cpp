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
        int n;
        cin >> n;

        ll a, b, c;
        ll x = 0, y = 0, z = 0;
        for(int i=0; i<n; i++){
            cin >> a >> b >> c;
            ll ma = min(a, b);
            ll mc = min(c, b);

            x += ma;
            y += mc;
            z += min(b, ma + mc);
        }

        cout << min(x, min(y, z / 2)) << endl;
    }
    return 0;
}