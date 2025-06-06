#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector <string> v(5);
    for(auto &x : v) cin >> x;

    int fl = 0;
    for(auto &x : v){
        if(x[0] == s[0] || x[1] == s[1]){
            fl = 1;
            break;
        }
    }

    if(fl) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}