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
        int h, m;
        cin >> h >> m;

        int x = 23 - h;
        int y = 60 - m;

        int ans = (x * 60) + y;
        cout << ans << endl; 
    }
    return 0;
}