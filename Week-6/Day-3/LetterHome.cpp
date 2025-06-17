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
        int n, s;
        cin >> n >> s;

        vector <int> v(n);
        int mx = 0, mn = INT_MAX;
        for(auto &x : v){ 
            cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }

        if(mn <= s && mx <= s){
            cout << s - mn << endl;
            continue;
        }
        if(mn > s && mx > s){
            cout << mx - s << endl;
            continue;
        }

        int x = s - mn;
        int y = mx - s;

        int a = min(x, y) * 2 + max(x, y);
        cout << a << endl;
    }
    return 0;
}