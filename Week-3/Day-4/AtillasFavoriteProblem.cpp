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
        string s;
        cin >> n >> s;

        int mx = 0;
        for(auto c : s){
            mx = max(mx, c - 'a');
        }
        cout << mx + 1 << endl;
    }
    return 0;
}