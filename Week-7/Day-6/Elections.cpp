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
        cin >> a >> b >> c;

        x = max(0, max(b, c) - a + 1);
        y = max(0, max(a, c) - b + 1);
        z = max(0, max(b, a) - c + 1);

        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}