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

        sort(v.begin(), v.end());
        ll GCD = 0;

        for(int i=1; i<n; i++){
            if(v[i] % v[0] == 0){
                GCD = __gcd(GCD, v[i]);
            }
        }

        if(GCD == v[0]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}