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

        int x = 0, y = 0;
        for(int i=1; i<=n; i++){
            int a;
            cin >> a;

            if(a == -1) x++;
            if(a == 0) y++;
        }

        int ans = 0;
        if(x % 2) ans += 2;
        ans += y;
        cout << ans << endl;
    }
    return 0;
}