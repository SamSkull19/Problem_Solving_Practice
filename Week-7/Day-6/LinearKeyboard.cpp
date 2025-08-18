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
        string s, x;
        cin >> s >> x;

        map <char, int> mp;
        int cnt = 1;

        for(auto c : s){
            mp[c] = cnt++;
        }

        int ans = 0;
        for(int i=1; i<x.size(); i++){
            ans += abs(mp[x[i]] - mp[x[i-1]]);
        }
        cout << ans << endl;
    }
    return 0;
}