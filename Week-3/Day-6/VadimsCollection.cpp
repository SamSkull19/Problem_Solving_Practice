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
        string s, x;
        cin >> s;

        map <char, int> mp;
        for(auto i : s){
            mp[i]++;
        }

        for(int i=1; i<=10; i++){
            int mn = 10 - i;
            for(int j=mn; j<=9; j++){
                char c = '0' + j;
                if(mp[c]){ 
                    x += c;
                    mp[c]--;
                    break;
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}