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
        ll n, m;
        cin >> n >> m;

        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        if(n == 2){
            cout << m << endl;
            continue;
        }
        cout << m * 2 << endl;
    }
    return 0;
}