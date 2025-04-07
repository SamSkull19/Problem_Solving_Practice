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
        int n, x;
        cin >> n >> x;

        cout << 1 + (max(n - 2, 0) + x - 1) / x  << endl;
    }
    return 0;
}