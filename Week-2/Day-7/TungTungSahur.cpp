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
        string p, s;
        cin >> p >> s;

        int n = (int)p.size();
        int m = (int)s.size();

        int l = 0, r = 0, flag = 1;
        while(l < n){
            char c = p[l];
            int x = 0, y = 0;

            if(!flag) break;
            if(r >= m || s[r] != c){
                flag = 0;
                break;
            }

            while(l < n && p[l] == c){
                x++;
                l++;
            }

            while(r < m && s[r] == c){
                y++;
                r++;
            }

            if(x > y || x * 2 < y){
                flag = 0;
                break;
            }
        }

        if(l < n || r < m) flag = 0;

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}