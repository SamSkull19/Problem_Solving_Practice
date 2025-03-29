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

        int one = 0;
        vector <int> v(n);
        for(auto &x : v){
            cin >> x;
            if(x == 1) one++;
        }

        if(one % 2 || (one == 0 && n % 2)){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}