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
        cin >> n >> m;

        int a[n][m], mx = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                mx = max(mx, a[i][j]);
            }
        }

        map <int, int> mpr, mpc;
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == mx){
                    mpr[i]++;
                    mpc[j]++;
                    cnt++;
                }
            }
        }


        int ans = mx;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int x = cnt - mpr[i] - mpc[j];
                if(a[i][j] == mx) x++;
                if(x == 0) ans = min(ans, mx - 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}