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
        int a, b, c, x, y, z;
        cin >> a >> x >> b >> y >> c >> z;

        int fl = 0;
        if(a == b && b == c && a == x + y + z) fl = 1;
        if(x == y && y == z && x == a + b + c) fl = 1;
        if(y == z && b + c == a && x + y == a) fl = 1;
        if(b == c && y + z == x && a + b == x) fl = 1;

        if(fl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}