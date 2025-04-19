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
        ll n, k;
        cin >> n >> k;

        vector <ll> l(n), r(n);
        for(auto &x : l) cin >> x;
        for(auto &x : r) cin >> x;

        ll sum = 0;
        vector <ll> v(n);
        for(int i=0; i<n; i++){
            ll x = l[i];
            ll y = r[i];
            
            sum += max(x, y);
            v[i] = min(x, y);
        }

        sort(v.rbegin(), v.rend());
        ll x = 0;
        for(int i=0; i<max(0LL, k-1); i++){
            x += v[i];
        }
        cout << sum + x + 1 << endl;
    }
    return 0;
}