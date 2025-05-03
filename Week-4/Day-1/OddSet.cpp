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

        int odd = 0, even = 0;
        for(int i=1; i<=2 * n; i++){
            int x;
            cin >> x;
            if(x % 2 == 0) even++;
            else odd++;
        }

        if(odd != even) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}