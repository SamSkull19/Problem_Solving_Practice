#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    for(auto &x : v) cin >> x;

    int mx = 1, cnt = 1;
    for(int i=1; i<n; i++){
        if(v[i-1] < v[i]){ 
            cnt++;
            mx = max(mx, cnt);
        }
        else{
            cnt = 1;
        }
    }
    cout << mx << endl;
    return 0;
}