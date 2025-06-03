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

        vector <ll> v(n);
        for(auto &x : v) cin >> x;

        ll mn = LLONG_MAX, l = 0;
        while(l < n){
            ll idx = l, x = v[l];
            while(l < n && x == v[l]){
                l++;
            }
            ll r = l - 1;
            ll s = x * (idx + (n - 1 - r));
            mn = min(mn, s);
        }
        cout << mn << endl;
    }
    return 0;
}