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
        string s;
        cin >> s;

        int n = (int)s.size();
        ll ans = 0, cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                cnt++;
            }
            else if(cnt){
                ans += cnt + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}