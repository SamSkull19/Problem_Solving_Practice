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

        vector <int> v(n);
        for(auto &x : v) cin >> x;

        int mx = 0, cnt = 0;
        for(auto &x : v){
            if(x == 0){
                cnt++;
                mx = max(mx, cnt);
            }
            else{
                cnt = 0;
            }
        }
        cout << mx << endl;
    }
    return 0;
}