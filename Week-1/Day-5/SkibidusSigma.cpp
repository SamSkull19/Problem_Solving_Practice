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

        vector <ll> v;
        ll sum = 0;
        
        for(int i=0; i<n; i++){
            ll s = 0;
            for(int j=0; j<m; j++){
                int x;
                cin >> x;
                s += x;
                sum += s;
            }
            v.push_back(s);
        }

        sort(v.begin(), v.end());
        for(ll i=0; i<n; i++){
            sum += (1LL * i * v[i] * m);
        }
        cout << sum << endl;
    }
    return 0;
}