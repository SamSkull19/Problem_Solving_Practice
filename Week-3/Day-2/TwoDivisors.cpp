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
        ll a, b;
        cin >> a >> b;

        if(b % a == 0){
            ll x = b / a;
            cout << b * x << endl;
        }
        else{
            ll x = (a * b) / __gcd(a, b);
            cout << x << endl;
        }
    }
    return 0;
}