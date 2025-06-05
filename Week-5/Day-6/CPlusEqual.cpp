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

        int cnt = 0, fl = 1;
        ll x = min(a, b), y = max(a, b);

        while(x + y <= n){
            cnt++;
            if(fl) x += y;
            else y += x;
            fl = !fl;
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}