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
        string s;
        cin >> s;

        if(s.size() <= 2 || s[0] != '1' || s[1] != '0'){
            cout << "NO" << endl;
        }
        
        else if(s.size() == 3 && (s[2] == '0' || s[2] == '1')){
            cout << "NO" << endl;
        }

        else{
            if(s[2] == '0') cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}