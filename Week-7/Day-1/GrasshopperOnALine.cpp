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
        int x, k;
        cin >> x >> k;

        if(x % k){
            cout << 1 << endl << x << endl;
            continue;
        }

        cout << 2 << endl << x - 1 << " " << 1 << endl;
    }
    return 0;
}