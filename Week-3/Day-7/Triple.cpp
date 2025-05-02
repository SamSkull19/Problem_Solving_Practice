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
        map <int, int> mp;
        for(auto &x : v){ 
            cin >> x;
            mp[x]++;
        }

        int ans = -1;
        for(auto [x, y] : mp){
            if(y >= 3){
                ans = x;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}