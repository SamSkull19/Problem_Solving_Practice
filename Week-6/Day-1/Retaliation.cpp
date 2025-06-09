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
        for(auto &i : v) cin >> i;

        int d = v[1] - v[0];
        int fl = 1;
        for(int i=2; i<n; i++){
            if(v[i] - v[i-1] != d){
                fl = 0;
                break;
            }
        }

        if(!fl){
            cout << "NO" << endl;
            continue;
        }
        int x = v[0] - d;
        int y = n + 1;

        if(x < 0 || x % y != 0){
            cout << "NO" << endl;
            continue;
        }
        int a = x / y;
        int b = a + d;
        
        if(b >= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}