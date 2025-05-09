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
        ll n, k;
        cin >> n >> k;

        vector <ll> v(n);
        ll mn = LLONG_MAX, mx = 0, sum = 0;
        map <ll, ll> mp;
        for(auto &x : v){ 
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
            sum += x;
            mp[x]++;
        }

        int x = mx - mn;
        if(x > k + 1 || (x == k + 1 && mp[mx] > 1)){
            cout << "Jerry" << endl;
            continue;
        }

        if(sum % 2) cout << "Tom" << endl;
        else cout << "Jerry" << endl;
    }
    return 0;
}