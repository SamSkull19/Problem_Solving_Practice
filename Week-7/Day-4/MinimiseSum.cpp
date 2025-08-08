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
        cout << min(2 * v[0], v[0] + v[1]) << endl;
    }
    return 0;
}