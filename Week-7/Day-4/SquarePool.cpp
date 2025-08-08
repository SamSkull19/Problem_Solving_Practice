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
        int n, s;
        cin >> n >> s;

        int a, b, c, d, ans = 0;
        for(int i=0; i<n; i++){
            cin >> a >> b >> c >> d;
            if(a == b) ans += (c == d);
            else ans += (c + d == s);
        }
        cout << ans << endl;
    }
    return 0;
}