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

        vector <ll> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        set <ll> s;
        for(int i=0; i<n; i++){
            if(b[i] != -1){
                s.insert(a[i] + b[i]);
            }
        }

        if(s.size() > 1){
            cout << 0 << endl;
            continue;
        }

        if(s.size() == 1){
            int sum = *s.begin();
            bool chk = true;

            for(int i=0; i<n; i++){
                if(b[i] == -1){
                    ll d = sum - a[i];
                    if(d < 0 || d > k){
                        chk = false;
                        break;
                    }
                }
                else{
                    if(a[i] + b[i] != sum){
                        chk = false;
                        break;
                    }
                }
            }
            cout << (chk ? 1 : 0) << endl;
        }

        else{
            ll mx = LLONG_MAX, mn = 0;

            for(int i=0; i<n; i++){
                ll mnV = a[i];
                ll mxV = a[i] + k;

                mn = max(mn, mnV);
                mx = min(mx, mxV);
            }

            if(mn > mx) cout << 0 << endl;
            else cout << (mx - mn + 1) << endl;
        }
    }
    return 0;
}