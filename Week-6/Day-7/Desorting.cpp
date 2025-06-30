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

        int mn = INT_MAX;
        for(int i=1; i<n; i++){
            mn = min(abs(v[i] - v[i-1]), mn);
        }

        if(is_sorted(v.begin(), v.end())) cout << mn / 2 + 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}