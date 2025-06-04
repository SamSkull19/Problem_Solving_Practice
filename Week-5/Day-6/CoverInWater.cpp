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
        string s;
        cin >> n >> s;

        int mx = 0, cnt = 0, x = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '.'){
                cnt++;
                x++;
            }
            else{
                x = 0;
            }
            mx = max(mx, x);
        }

        if(mx > 2) cout << 2 << endl;
        else cout << cnt << endl;
    }
    return 0;
}