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

        for(int i=1; i<n; i++){
            if(i % 2 == 0) cout << 3 << " ";
            else cout << -1 << " ";
        }
        if(n % 2 == 0) cout << 2 << endl;
        else cout << -1 << endl;
    }
    return 0;
}