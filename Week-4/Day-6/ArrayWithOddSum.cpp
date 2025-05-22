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

        vector <int> v(n);
        int odd = 0, even = 0;
        for(auto &x : v){ 
            cin >> x;
            if(x % 2 == 1) odd++;
            else even++;
        }

        if((even == 0 && odd % 2 == 0) || odd == 0) cout << "NO" << endl;
        else cout << "YES" << endl; 
    }
    return 0;
}