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

        map <int, int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }

        if(mp.size() > 2){
            cout << "NO" << endl;
            continue;
        }

        if(mp.size() == 1){
            cout << "YES" << endl;
            continue;
        }

        int fl = 0;
        for(auto [x, y] : mp){
            if(y == n / 2){
                fl = 1;
                break;
            }
        }

        if(fl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}