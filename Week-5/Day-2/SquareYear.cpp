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
        int k;
        cin >> k;

        int x = sqrt(k);
        if(x * x != k){
            cout << -1 << endl;
            continue;
        }

        int a = x / 2;
        int b = (x + 1) / 2;
        cout << a << " " << b << endl;
    }
    return 0;
}