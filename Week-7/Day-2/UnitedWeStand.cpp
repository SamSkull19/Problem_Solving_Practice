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
        for(auto &i : v){ 
            cin >> i;
        }
        
        sort(v.begin(), v.end());
        int x = 1;
        for(int i=0; i<n-1; i++){
            if(v[i] != v[i + 1]) break;
            x++;
        }

        if(x == n){
            cout << -1 << endl;
            continue;
        }

        cout << x << " " << n - x << endl;
        for(int i=0; i<=x; i++) cout << v[i] << " ";
        cout << endl;        
        for(int i=x+1; i<n; i++) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}