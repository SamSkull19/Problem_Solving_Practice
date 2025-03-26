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
        int n, m;
        cin >> n >> m;

        ll mx = 0;
        for(int i=0; i<n; i++){
            ll x;
            cin >> x;
            mx = max(mx, x);
        }

        while(m--){
            char c;
            int l, r;
            cin >> c >> l >> r;

            if(l <= mx && mx <= r){
                if(c == '+') mx++;
                else mx--;
            }
            cout << mx << " ";
        }
        cout << endl;
    }
    return 0;
}