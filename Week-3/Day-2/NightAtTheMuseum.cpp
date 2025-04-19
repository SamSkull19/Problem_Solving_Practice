#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int ans = 0, a = 0;
    for(auto c : s){
        int x = c - 'a';
        int p = abs(x - a);
        ans += min(p, 26 - p);
        a = x;
    }
    cout << ans << endl;
    return 0;
}