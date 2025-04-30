#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int MOD = 998244353;

int MOD_Check(ll b, ll e, ll mod){
    ll ans = 1;
    b %= mod;
    while(e > 0){
        if(e & 1){
            ans = (ans * b) % mod;
        }
        b = (b * b) % mod;
        e >>= 1;
    }
    return ans;
}

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

        map <ll, ll> mp;
        bool flag = true;
        for(auto x : v){
            if(x < 0 || x >= n){
                flag = false;
                break;
            }
            mp[x]++;
        }

        if(!flag){
            cout << 0 << endl;
            continue;
        }

        for(auto [x, y] : mp){
            if(y > 2){
                flag = false;
                break;
            }
        }

        if(!flag){
            cout << 0 << endl;
            continue;
        }

        if(n % 2 == 1){
            int m = n / 2;
            if(mp[m] != 1){
                flag = false;
            }
        }

        if(!flag){
            cout << 0 << endl;
            continue;
        }

        for(int i=0; i<n/2; i++){
            if(mp[i] + mp[n - 1 - i] != 2){
                flag = false;
                break;
            }
        }

        if(!flag){
            cout << 0 << endl;
            continue;
        }

        cout << MOD_Check(2, n / 2, MOD) << endl;
    }
    return 0;
}