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
        string s;
        cin >> n >> m >> s;

        map <char, int> mp;
        for(auto c : s){
            mp[c]++;
        }

        int ans = 0;
        for(auto [x, y] : mp){
            if(y < m){
                ans += m - y;
            }
        }
        
        int x = (int)mp.size();
        int a = m * (7 - x);
        cout << ans + a << endl;
    }
    return 0;
}