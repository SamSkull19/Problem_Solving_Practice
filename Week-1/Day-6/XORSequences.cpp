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
        ll x, y;
        cin >> x >> y;

        ll mx = max(x, y);
        int b = __lg(mx);

        ll cnt = 0;
        for(int i=0; i<=b; i++){
            if(((x >> i) & 1) == ((y >> i) & 1)){
                cnt++;
            }
            else{
                break;
            }
        }
        cout << (1LL << cnt) << endl;
    }
    return 0;
}