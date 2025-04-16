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

        int g = 0, b = 0, cnt = 0;
        for(auto c : s){
            if(g * 2 < b){
                break;
            }
            cnt++;
            if(c == 'G') g++;
            if(c == 'B') b++;
        }
        cout << cnt << endl;
    }
    return 0;
}