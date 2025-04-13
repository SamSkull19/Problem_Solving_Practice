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

        vector <int> v(n);
        for(auto &x : v) cin >> x;

        map <int, int> mp;
        for(int k=0; k<n; k++){
            for(int m = 0; m < 30; m++){
                if((v[k] >> m) & 1){
                    mp[m]++;
                }
            }
        }

        ll mx = 0;
        for(int k=0; k<n; k++){
            ll x = 0;
            for(int m = 0; m < 30; m++){
                if((v[k] >> m) & 1){
                    x += (ll)(n - mp[m]) * (1LL << m);
                }
                else{
                    x += (ll)mp[m] * (1LL << m);
                }
            }
            mx = max(mx, x);
        }
        cout << mx << endl;
    }
    return 0;
}