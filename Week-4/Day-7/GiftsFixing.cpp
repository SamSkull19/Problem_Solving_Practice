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

        vector <ll> a(n), b(n);
        ll mnA = LLONG_MAX, mnB = LLONG_MAX;

        for(auto &x : a){
            cin >> x;
            mnA = min(mnA, x);
        }
        for(auto &x : b){
            cin >> x;
            mnB = min(mnB, x);
        }

        ll sum = 0;
        for(int i=0; i<n; i++){
            ll x = a[i] - mnA;
            ll y = b[i] - mnB;
            
            ll mn = min(x, y);
            ll mx = max(x, y);
            
            sum += mn;
            sum += mx - mn;
        }
        cout << sum << endl;
    }
    return 0;
}