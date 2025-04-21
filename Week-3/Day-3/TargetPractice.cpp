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
        vector <string> v(10);
        for(auto &x : v) cin >> x;

        int ans = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(v[i][j] == 'X'){
                    int x = i + 1, y = j + 1;
                    if(x > 5) x = 11 - x;
                    if(y > 5) y = 11 - y;
                    ans += min(x, y);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
