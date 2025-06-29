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

        string c = s;

        for(int i=1; i<(int)s.size(); i++){
            if(s[i] != s[0]){
                swap(s[i], s[0]);
            }
        }

        if(s == c){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
    return 0;
}