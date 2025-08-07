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
        int a, b;
        cin >> a >> b;

        if(a % 2 == 1 || (a == 0 && b % 2 == 1)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}