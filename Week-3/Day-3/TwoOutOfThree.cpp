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

        vector <int> v(n, 1);
        map <int, int> mp;
        int cnt = 1;

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mp[x]++;
            if(mp[x] == 2 && cnt < 3){
                cnt++;
                v[i] = cnt;
            }
        }

        if(cnt != 3){
            cout << -1 << endl;
            continue;
        }
        for(auto x : v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}