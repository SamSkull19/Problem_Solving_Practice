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
        int n;
        cin >> n;

        int ans = 0;
        ans += (n / 4);
        n %= 4;
        ans += (n / 2);
        cout << ans << endl;
    }
    return 0;
}