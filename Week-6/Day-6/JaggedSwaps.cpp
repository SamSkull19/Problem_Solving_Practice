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

        vector <int> v(n);
        int mn = n + 1;
        for(auto &x : v){ 
            cin >> x;
            mn = min(mn, x);
        }

        if(v[0] == mn) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}