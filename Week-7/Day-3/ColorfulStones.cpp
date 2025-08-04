#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int sz = (int)t.size();
    int l = 0, r = 0;
    while(sz--){
        if(s[l] == t[r]){
            l++;
        }
        r++;
    }
    cout << ++l << endl;
    return 0;
}