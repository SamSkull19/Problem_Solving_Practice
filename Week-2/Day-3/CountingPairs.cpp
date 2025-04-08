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
        ll n, x, y;
        cin >> n >> x >> y;

        vector <ll> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin(), v.end());
        ll ans = 0;

        for(int i=0; i<n; i++){
            ll l = lower_bound(v.begin() + i + 1, v.end(), sum - y - v[i]) - v.begin();
            ll r = upper_bound(v.begin() + i + 1, v.end(), sum - x - v[i]) - v.begin();

            ans += (r - l);
        }
        cout << ans << endl;
    }
    return 0;
}