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

        if(n % 2 == 0){
            cout << -1 << endl;
            continue;
        }

        cout << n << " ";
        for(int i=1; i<n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}