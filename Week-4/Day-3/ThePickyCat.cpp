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
        for(auto &x : v) cin >> x;

        int a = abs(v[0]), cnt = 0;
        for(int i=1; i<n; i++){ 
            if(abs(v[i]) < a){
                cnt++;
            }
        }
        
        if(cnt > n / 2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}