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
        for(auto c : s){
            mp[c]++;
        }

        int x = 1;
        for(int i=1; i<n; i++){
            if(s[i-1] != s[i]){
                if(mp[s[i-1]] > 1){
                    x = 0;
                    break;
                }
            }
            mp[s[i-1]]--;
        }

        cout << (x ? "YES" : "NO") << endl;
    }
    return 0;
}