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

        vector <int> mn(n), mx(n);
        int x =  v[0], y = v[n-1];
        
        for(int i=0; i<n; i++){
            x = min(x, v[i]);
            mn[i] = x;

            int j = n - i - 1;
            y = max(y, v[j]);
            mx[j] = max(y, v[j]);
        }

        string s;
        for(int i=0; i<n; i++){
            if(v[i] == mx[i] || v[i] == mn[i]){
                s += '1';
            }
            else{
                s += '0';
            }
        }
        cout << s << endl;
    }
    return 0;
}