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

        int x = n * n - 1;
        int v[n][n];
        int l = 0, r = n-1;
        
        while(l <= r){
            if(l == r) v[l][r] = x--;
            for(int i=l; i<r; i++) v[l][i] = x--;
            for(int i=l; i<r; i++) v[i][r] = x--;
            for(int i=l; i<r; i++) v[r][n-1-i] = x--;
            for(int i=l; i<r; i++) v[n-1-i][l] = x--;
            l++;
            r--;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}