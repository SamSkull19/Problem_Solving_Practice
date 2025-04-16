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
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int x = a + b + c + n;
        int y = x / 3;
        
        if(x % 3 == 0 && y >= a && y >= b && y >= c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}