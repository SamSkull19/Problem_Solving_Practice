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

        ll cnt = 0;
        for(ll i=1; i<=9; i++){
            ll x = i;
            while(x <= n){
                cnt++;
                x = x * 10 + i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}