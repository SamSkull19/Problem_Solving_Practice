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

        string x, s;
        cin >> x >> s;

        int cnt = 0, fl = 0;
        while(x.find(s) == string::npos && x.size() < m + n){
            x += x;
            cnt++;
        }
        
        if(x.find(s) == string::npos) cout << -1 << endl;
        else cout << cnt << endl;
    }
    return 0;
}