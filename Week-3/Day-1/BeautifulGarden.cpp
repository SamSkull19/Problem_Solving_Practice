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
        int n, k, d;
        cin >> n >> k >> d;

        vector <int> v(n);
        for(auto &x : v) cin >> x;

        if(n <= k){
            cout << 0 << endl;
            continue;
        }

        sort(v.begin(), v.end());
        int sum = 0;
        for(int i=0; i<n - k; i++){
            sum += ((d + v[i] - 1) / v[i]);
        }
        cout << sum << endl;
    }
    return 0;
}