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

        int l = 0, r = 0, mx = 0;
        while(l < n && s[l] != 'B'){
            l++;
        }
        while(r < n){
            if(s[r] == 'B') mx = max(mx, r - l + 1);
            r++;
        }
        cout << mx << endl;
    }
    return 0;
}