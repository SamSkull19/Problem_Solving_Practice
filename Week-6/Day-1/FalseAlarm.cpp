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
        int n, x;
        cin >> n >> x;

        vector <int> v(n);
        for(auto &i : v) cin >> i;

        int fl = 0;
        for(int i=0; i<=n; i++){
            int ok = 1;
            for(int j=0; j<n; j++){
                if(v[j] == 1){
                    if(i < j || i >= j + x){
                        ok = 0;
                        break;
                    }
                }
            }

            if(ok){
                fl = 1;
                break;
            }
        }

        if(fl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}