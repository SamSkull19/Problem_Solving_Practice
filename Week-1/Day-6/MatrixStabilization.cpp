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

        vector <vector <int>> v(n+2, vector <int>(m+2, 0));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> v[i][j];
            }
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(v[i][j] >= v[i][j+1] && v[i][j] >= v[i+1][j] && v[i][j] >= v[i-1][j] && v[i][j] >= v[i][j-1]){
                    v[i][j] = max(v[i][j+1], max(v[i+1][j], max(v[i-1][j], v[i][j-1])));
                }
            }
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}