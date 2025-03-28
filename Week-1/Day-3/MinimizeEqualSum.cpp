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
        for(auto &x : v){
            cin >> x;
        }
        
        rotate(v.begin(), v.begin() + 1, v.end());
        for(auto x : v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}