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
        int n, m;
        cin >> n >> m;

        vector <vector <int>> v(n, vector <int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> v[i][j];
            }
        }

        int mx = n * m, mn = mx;
        vector <pair<int, int>> d = {{-1, 1}, {1, 1}, {1, -1}, {-1, -1}};

        for(auto [r, c] : d){
            map <int, int> mp;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    int x = v[i][j] - (r * i) - (c * j);
                    mp[x]++;
                }
            }

            for(auto [x, y] : mp){
                mn = min(mn, mx - y);
            }
        }
        cout << mn << endl;
    }
    return 0;
}