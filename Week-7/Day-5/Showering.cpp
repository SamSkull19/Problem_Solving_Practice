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
        int n, s, m;
        cin >> n >> s >> m;

        vector <pair<int, int>> v(n); 
        for(int i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
        }

        if(v[0].first >= s || abs(m - v[n-1].second) >= s){
            cout << "YES" << endl;
            continue;
        }

        int x = 0;
        for(int i=1; i<n; i++){
            if(abs(v[i].first - v[i - 1].second) >= s){
                x = 1;
                break;
            }
        }
        
        if(x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}