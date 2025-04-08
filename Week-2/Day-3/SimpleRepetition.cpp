#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool prime(ll n){
    if(n == 1){
        return false;
    }
    for(ll i=2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll x, k;
        cin >> x >> k; 

        if(k == 1){
            if(prime(x)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else{
            if(x == 1 && k == 2) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}