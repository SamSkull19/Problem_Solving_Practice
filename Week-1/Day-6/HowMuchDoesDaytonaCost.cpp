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
        int n, k;
        cin >> n >> k;

        int a = 0;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            if(x == k){
                a = 1;
            }
        }
        cout << (a ? "YES" : "NO") << endl;
    }
    return 0;
}