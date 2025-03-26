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
        int l, r, x, y;
        cin >> l >> r >> x >> y;

        if(x > r || l > y){
            cout << 1 << endl;
            continue;
        }

        int ans = min(r, y) - max(l, x);
        if(l == x && r == y){
            cout << ans << endl;
        }
        else if(l == x || r == y){
            cout << ans + 1 << endl;
        }
        else{
            cout << ans + 2 << endl;
        }
    }
    return 0;
}