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
        int n, m;
        cin >> n >> m;

        vector <int> a(n), b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        vector <int> p(m + 1, n), s(m + 1, -1);
        p[0] = -1;
        int x = 0;

        for(int i=0; i<n; i++){
            if(x >= m) break;
            if(a[i] >= b[x]){
                p[x + 1] = i;
                x++;
            }
        }

        int y = m - 1;
        s[m] = n;
        for(int i=n-1; i>=0; i--){
            if(y < 0) break;
            if(a[i] >= b[y]){
                s[y] = i;
                y--;
            }
        }

        if(p[m] < n){
            cout << 0 << endl;
            continue;
        }

        int mn = INT_MAX;
        for(int i=1; i<=m; i++){
            if(p[i-1] < s[i]){
                mn = min(mn, b[i-1]);
            }
        }

        if(mn != INT_MAX){
            cout << mn << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}