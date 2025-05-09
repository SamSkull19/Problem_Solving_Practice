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

        ll mn1 = 2e9, mn2 = 2e9, sum = 0;
        for(int i=0; i<n; i++){
            ll m;
            cin >> m;
            vector <ll> v(m);
            for(int j=0; j<m; j++){ 
                cin >> v[j];
            }

            sort(v.begin(), v.end());
            mn1 = min(mn1, v[0]);
            mn2 = min(mn2, v[1]);
            sum += v[1];
        }
        cout << sum + mn1 - mn2 << endl;
    }
    return 0;
}