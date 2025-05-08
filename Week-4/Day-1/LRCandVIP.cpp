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

        set <int> s;
        vector <int> v(n);
        int mx = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mx = max(mx, v[i]);
            s.insert(v[i]);
        }

        if(s.size() == 1){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for(auto x : v){
            if(x == mx) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << endl;
     }
    return 0;
}