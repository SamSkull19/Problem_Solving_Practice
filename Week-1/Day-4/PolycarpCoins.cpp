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

        ll y = (n + 1) / 3;
        ll x = n - (y * 2);
        cout << x << " " << y << endl;
    }
    return 0;
}