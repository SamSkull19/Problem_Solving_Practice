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
        ll n;
        cin >> n;

        vector <ll> v(n);
        for(auto &x : v) cin >> x;

        ll x = v[0], cnt = 0;
        for(int i=0; i<n; i++){
            x &= v[i];
            if(!x){
                cnt++;
                if(i == n-1) break;
                x = v[i + 1];
            }
        }

        if(!cnt) cnt++;
        cout << cnt << endl;
    }
    return 0;
}