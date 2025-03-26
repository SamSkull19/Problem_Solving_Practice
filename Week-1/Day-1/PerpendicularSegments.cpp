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
        int x, y, k;
        cin >> x >> y >> k;

        int s = min(k, min(x, y));
        cout << 0 << " " << 0 << " " << s << " " << s << endl;
        cout << s << " " << 0 << " " << 0 << " " << s << endl;
    }
    return 0;
}