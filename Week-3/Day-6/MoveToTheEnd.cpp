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

        vector <ll> v(n), p(n);
        for(auto &x : v) cin >> x;

        p[0] = v[0];
        for(int i=1; i<n; i++){
            p[i] = max(p[i-1], v[i]);
        }

        ll sum = 0;
        for(int i=n-1; i>=0; i--){
            cout << p[i] + sum << " ";
            sum += v[i];
        }
        cout << endl;
    }
    return 0;
}