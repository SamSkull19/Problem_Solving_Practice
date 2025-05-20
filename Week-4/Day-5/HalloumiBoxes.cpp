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

        vector <ll> v(n);
        for(auto &x : v) cin >> x;

        if(k == 1){
            int fl = 1;
            for(int i=1; i<n; i++){
                if(v[i-1] > v[i]){
                    fl = 0;
                    break;
                }
            }
            if(fl) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
