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
        for(auto &x : v) cin >> x;

        sort(v.begin(), v.end());
        int mn = INT_MAX;

        for(int i=1; i<n; i++){
            mn = min(mn, v[i] - v[i-1]);
        }
        cout << mn << endl;
    }
    return 0;
}