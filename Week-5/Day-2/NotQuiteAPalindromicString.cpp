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
        int n, k;
        string s;
        cin >> n >> k >> s;

        int x = 0, y = 0;
        for(auto c : s){
            if(c == '1') x++;
            else y++;
        }

        int a = abs(x - y) / 2;
        if(a > k) cout << "NO" << endl;
        else if((k - a) % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}