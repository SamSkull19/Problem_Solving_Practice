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
        int n, k;
        cin >> n >> k;

        vector <int> v(n), x(n);
        for(auto &a : v) cin >> a;
        for(auto &a : x) cin >> a;

        sort(v.begin(), v.end());
        sort(x.rbegin(), x.rend());

        for(int i=0; i<n; i++){
            if(k == 0) break;
            if(v[i] < x[i]){
                swap(v[i], x[i]);
            }
            k--;
        }

        int ans = accumulate(v.begin(), v.end(), 0);
        cout << ans << endl;
    }
    return 0;
}