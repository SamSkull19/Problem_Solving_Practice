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
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        if(x > y){
            swap(a, b);
            swap(x, y);
        }

        int ans = 0;
        if(k >= a){
            int p = (k - a) / x + 1;
            k -= p * x;
            ans += p;
        }
        
        if(k >= b){
            int p = (k - b) / y + 1;
            ans += p;
        }
        cout << ans << endl;
    }
    return 0;
}