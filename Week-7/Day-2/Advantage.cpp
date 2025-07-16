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

        vector <int> v(n), ans, x;
        for(auto &i : v) cin >> i;

        x = v;
        sort(x.rbegin(), x.rend());
        for(auto &i : v){
            if(i == x[0]){
                ans.push_back(i - x[1]);
            }
            else{
                ans.push_back(i - x[0]);
            }
        }

        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}