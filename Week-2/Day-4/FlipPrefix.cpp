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
        string s;
        cin >> n >> s;

        int zero = 0, one = 0, ans = 0;
        for(auto c : s){
            if(c == '0'){
                zero++;
            }
            if(c == '1'){
                one++;
            }
            if(one == zero){
                ans++;
            }
        }

        if(ans == 0){
            cout << 1 << endl;
        }
        else{
            cout << (1 << ans) << endl;
        }
    }
    return 0;
}