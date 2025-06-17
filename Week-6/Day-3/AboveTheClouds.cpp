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

        map <char, int> mp;
        int fl = 0;
        for(auto c : s){
            mp[c]++;
        }

        for(int i=1; i<n-1; i++){
            if(mp[s[i]] > 1){
                fl = 1;
                break;
            }
        }

        if(fl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}