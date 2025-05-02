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

        int x = 0, y = 0, a = 0;
        for(auto c : s){
            if(c == 'L') x--;
            if(c == 'R') x++;
            if(c == 'D') y--;
            if(c == 'U') y++;
            if(x == 1 && y == 1){
                a = 1;
                break;
            }
        }

        if(a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}