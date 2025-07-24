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

        int x = 0, y = 0;
        for(auto c : s){
            if(c == 'B') x++;
            else y++;
        }
        if(x == y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}