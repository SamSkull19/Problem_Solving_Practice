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

        ll n = (int)s.size();
        ll idx, cnt = 0;

        for(ll i=n-1; i>=0; i--){
            if(s[i] != '0'){
                idx = i;
                break;
            }
            cnt++;
        }
        
        for(ll i=0; i<idx; i++){
            if(s[i] != '0'){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}