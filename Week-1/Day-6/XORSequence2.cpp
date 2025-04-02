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
        ll x, y;
        cin >> x >> y;

        x ^= y;
        cout << (x & -x) << endl;
    }
    return 0;
}