#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int MOD = 1e9 + 7;

ll powMod(ll x, ll n){
    x %= MOD;
    if(n == 0) return 1;
    if(n == 1) return x;

    ll p = powMod(x * x, n / 2);
    if(n % 2 == 1){
        return p * x % MOD;
    }
    else{
        return p;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    for(auto x : b){
        cout << powMod(2, x) << endl;
    }
    return 0;
}