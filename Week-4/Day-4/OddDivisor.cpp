#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool p(ll n){
    return (n & (n - 1)) == 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        if(n % 2 != 0) cout << "YES" << endl;
        else{ 
            if(p(n)) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}