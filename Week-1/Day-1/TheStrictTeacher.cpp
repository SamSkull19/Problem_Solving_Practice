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
        int n, m, q;
        cin >> n >> m >> q;

        vector <int> v(m);
        for(int i=0; i<m; i++){
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        while(q--){
            int x;
            cin >> x;

            int k = lower_bound(v.begin(), v.end(), x) - v.begin();

            if(k == m){
                cout << n - v[k - 1];
            }
            else if(k == 0){
                cout << v[k] - 1;
            }
            else{
                cout << (v[k] - v[k-1]) / 2;
            }
            cout << endl;
        }
    }
    return 0;
}