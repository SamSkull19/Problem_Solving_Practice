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

        string x = "314159265358979323846264338327";
        int cnt = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] != x[i]) break;
            cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}