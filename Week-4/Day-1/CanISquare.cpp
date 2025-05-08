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

        vector <ll> v(n);
        ll sum = 0;
        for(auto &x : v){ 
            cin >> x;
            sum += x;
        }   

        ll x = sqrt(sum);
        if(x * x == sum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}