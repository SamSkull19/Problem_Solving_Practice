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
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int x = min(a, n - a + 1);
        int y = min(b, m - b + 1);

        int p = n, q = y, r = x, s = m;
        cout << (1 + min(ceil(log2(p)) + ceil(log2(q)), ceil(log2(r)) + ceil(log2(s)))) << endl;
    }
    return 0;
}