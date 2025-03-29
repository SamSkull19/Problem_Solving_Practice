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
        int a, b;
        cin >> a >> b;

        int x = max(a, b);
        int y = min(a, b);
        
        int mx = max(x, 2 * y);
        cout << mx * mx << endl;
    }
    return 0;
}