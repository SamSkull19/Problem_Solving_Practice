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

        char x = '0';
        for(auto &c : s){
            if(c == '?') c = x;
            x = c;
        }
        cout << s << endl;
    }
    return 0;
}