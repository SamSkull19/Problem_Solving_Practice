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

        vector <int> v(n), x(n);
        for(auto &x : v) cin >> x;

        int l = 0, r = n-1;
        for(int i=0; i<n; i++){
            if(i & 1){
                x[i] = v[r];
                r--;
            }
            else{
                x[i] = v[l];
                l++;
            }
        }

        for(auto i : x){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}