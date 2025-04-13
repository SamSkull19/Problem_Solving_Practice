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
        string a, b, c;
        cin >> a >> b >> c;

        string x;
        x += a[0];
        x += b[0];
        x += c[0];

        cout << x << endl;
    }
    return 0;
}