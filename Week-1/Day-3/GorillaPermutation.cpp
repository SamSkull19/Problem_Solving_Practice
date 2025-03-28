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
        int n, m, k;
        cin >> n >> m >> k;

        for(int i=n; i>m; i--){
            cout << i << " ";
        }
        for(int i=1; i<=m; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}