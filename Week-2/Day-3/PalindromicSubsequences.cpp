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

        cout << 1 << " ";
        for(int i=1; i<=n-2; i++){
            cout << i << " ";
        }
        cout << 1 << endl;
    }
    return 0;
}