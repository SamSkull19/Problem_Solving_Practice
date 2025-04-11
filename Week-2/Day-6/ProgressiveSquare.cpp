#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, c, d;
        cin >> n >> c >> d;

        vector <int> v(n * n);
        map <int, int> mp;
        for(auto &x : v){ 
            cin >> x;
            mp[x]++;
        }

        sort(v.begin(), v.end());
        int flag = 1, mn = v[0];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int x = mn + (i * c) + (j * d);
                if(mp[x] == 0){
                    flag = 0;
                    break;
                }
                mp[x]--;
            }
            if(!flag) break;
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}