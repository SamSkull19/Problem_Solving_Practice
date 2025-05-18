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
        int cnt = 0;
        for(auto &x : v){
            cin >> x;
            if(x == 1) cnt++;
        }

        if(n == cnt || n - cnt == n){ 
            cout << "YES" << endl;
            continue;
        }

        int x = 1;
        for(int i=0; i<n-1; i++){
            if(v[i] == 0 && v[i + 1] == 0){
                x = 0;
                break;
            }
        }

        if(!x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}