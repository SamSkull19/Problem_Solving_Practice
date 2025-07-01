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
        int n, j, k;
        cin >> n >> j >> k;

        vector <int> v(n);
        int mx = 0;
        for(auto &x : v){ 
            cin >> x;
            mx = max(mx, x);
        }

        if(k == 1 && v[j-1] != mx){
            cout << "NO" << endl;
        }
        else{ 
            cout << "YES" << endl;
        }
    }
    return 0;
}