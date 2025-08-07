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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x = 5 * a + b;
        int y = 5 * c + d;

        if(x >= y && (x - y) % 6 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}