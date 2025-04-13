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

        int x = 0, y = n-1;
        while(x < n - 1 && v[0] == v[x + 1]){
            x++;
        }
        while(y > 0 && v[n-1] == v[y - 1]){
            y--;
        }

        if(v[0] == v[n-1]){
            cout << max(0, y - x - 1) << endl;
        }
        else{
            cout << min(n - x - 1, y) << endl;
        }
    }
    return 0;
}