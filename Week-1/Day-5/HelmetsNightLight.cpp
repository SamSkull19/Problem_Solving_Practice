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
        int n, p;
        cin >> n >> p;

        vector <int> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        vector <pair<int, int>> v(n);
        for(int i=0; i<n; i++){
            v[i].first = min(b[i], p);
            v[i].second = a[i];
        }

        sort(v.begin(), v.end());
        ll sum = p;
        int x = n - 1;

        for(int i=0; i<n; i++){
            sum += (1LL * min(v[i].second, x) * v[i].first);
            x -= min(v[i].second, x);
        }
        cout << sum << endl;
    }
    return 0;
}