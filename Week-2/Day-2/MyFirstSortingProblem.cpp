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
        int x, y;
        cin >> x >> y;

        cout << min(x, y) << " " << max(x, y) << endl;
    }
    return 0;
}