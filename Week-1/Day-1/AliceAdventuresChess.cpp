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
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int q = 20, x = 0, y = 0;
        bool flag = false;

        while(q--){
            bool check = false;
            for(auto c : s){
                if(c == 'N') y++;
                if(c == 'E') x++;
                if(c == 'S') y--;
                if(c == 'W') x--;

                if(x == a && y == b){
                    flag = true;
                    check = true;
                    break;
                }
            }
            if(check){
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}