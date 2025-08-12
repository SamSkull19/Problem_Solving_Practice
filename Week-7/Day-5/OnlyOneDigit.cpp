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
        string n;
        cin >> n;

        int mn = INT_MAX;
        for(auto c : n){
            mn = min(mn, c - '0');
        }
        cout << mn << endl;
    }
    return 0;
}