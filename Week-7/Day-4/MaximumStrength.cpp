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
        string a, b;
        cin >> a >> b;

        int sz = (int)b.size();
        int sx = (int)a.size();

        string x;
        if(sz != sx){
            for(int i=0; i<sz - sx; i++){
                x += '0';
            }
            a = x + a;
        }

        int idx = -1;
        int ans = 0;
        for(int i=0; i<sz; i++){
            if(a[i] < b[i]){
                ans += abs((a[i] - '0') - (b[i] - '0'));
                idx = i + 1;
                break;
            }
            ans += abs((a[i] - '0') - (b[i] - '0'));
        }
        if(idx == -1) cout << 0 << endl;
        else{
            ans += (9 * (sz - idx));
            cout << ans << endl;
        }
    }
    return 0;
}