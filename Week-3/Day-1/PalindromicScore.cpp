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
        vector <int> v(3);
        for(int i=0; i<3; i++){
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        int ans = 0;
        ans += v[1];

        if(v[1] % 2 == 1 && v[0] % 2 == 1){
            ans += (v[0] - 1);
        }
        else{
            ans += v[0];
        }
        cout << ans << endl;
    }
    return 0;
}