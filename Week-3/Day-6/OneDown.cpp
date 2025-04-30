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

        string s, x;
        cin >> s >> x;

        string ans = "YES";
        for(int i=0; i<n; i++){
            if(x[i] == '1'){
                if(s[i] != '1'){
                    ans = "NO";
                    break;
                }
            }
        }

        if(ans == "NO"){
            cout << ans << endl;
            continue;
        }

        int a = count(s.begin(), s.end(), '1');
        int b = count(x.begin(), x.end(), '1');

        if(a < b || (a - b) % 2 != 0){
            ans = "NO";
        }
        cout << ans << endl;
    }
    return 0;
}