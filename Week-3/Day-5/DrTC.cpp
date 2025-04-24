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

        int cnt = count(s.begin(), s.end(), '1');
        int ans = 0;
        for(auto c : s){
            if(c == '1'){
                ans += cnt - 1;
            }
            else{
                ans += cnt + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}