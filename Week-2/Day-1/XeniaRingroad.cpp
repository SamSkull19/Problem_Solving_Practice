#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector <int> v(m);
    for(auto &x : v) cin >> x;

    int x = 1;
    ll ans = 0;
    for(int i=0; i<m; i++){
        if(v[i] >= x){
            ans += (v[i] - x);
            x = v[i];
        }
        else{
            ans += (n - (x - v[i]));
            x = v[i];
        }
    }
    cout << ans << endl;
    return 0;
}