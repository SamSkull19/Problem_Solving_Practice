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
        int a, b, c;
        cin >> a >> b >> c;

        int x = (a + b + 1) / 2;
        int y = x - min(a, b);

        int ans = (y + c - 1) / c;
        cout << ans << endl;
    }
    return 0;
}