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

        vector <vector <int>> a(n + 1, vector <int>(m + 1, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        set <int> x, y;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == a[i + 1][j] || a[i][j] == a[i][j + 1]){
                    y.insert(a[i][j]);
                }
                x.insert(a[i][j]);
            }
        }

        int sx = (int)x.size();
        int sy = (int)y.size();

        if(y.empty()){
            cout << sx - 1 << endl;
        }
        else{
            cout << sx + sy - 2 << endl;
        }
    }
    return 0;
}