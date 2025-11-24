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

        if(n % 2 == 1){
            cout << 0 << endl;
            continue;
        }

        cout << n / 4 + 1 << endl;
    }
    return 0;
}