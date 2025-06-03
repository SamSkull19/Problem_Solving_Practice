#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int MOD = 998244353;

ll modPow(ll a, ll n){
    if(n == 0) return 1;

    ll x = modPow(a, n/2);
    ll sum = (x * x % MOD) * (n & 1 ? a : 1) % MOD;
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <ll> p(n), q(n);
        for(auto &x : p) cin >> x;
        for(auto &x : q) cin >> x;

        ll mxp = 0, mxq = 0;
        for(int i=0; i<n; i++){
            if(p[i] > p[mxp]) mxp = i;
            if(q[i] > q[mxq]) mxq = i;

            if(p[mxp] > q[mxq] || (p[mxp] == q[mxq] && q[i - mxp] > p[i - mxq])){
                cout << (modPow(2, p[mxp]) + modPow(2, q[i - mxp])) % MOD << " ";
            }
            else{
                cout << (modPow(2, q[mxq]) + modPow(2, p[i - mxq])) % MOD << " ";
            }
        }
        cout << endl;
    }
    return 0;
}