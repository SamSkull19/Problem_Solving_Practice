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

        for(int i=2; i<=n; i+=2) cout << i << " ";
        cout << 1 << " ";
        for(int i=n; i>=3; i--) if(i % 2) cout << i << " ";
        cout << endl;
    }
    return 0;
}