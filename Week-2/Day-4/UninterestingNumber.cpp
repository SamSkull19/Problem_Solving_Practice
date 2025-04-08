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

        int sum = 0, x = 0, y = 0;
        for(auto c : s){
            if(c == '2') x++;
            if(c == '3') y++;
            sum += (c - '0');
        }

        int a = 0;
        for(int i=0; i<=x; i++){
            for(int j=0; j<=y; j++){
                if((sum + (i * 2) + (j * 6)) % 9 == 0){
                    a = 1;
                    break;
                }
            }
        }
        cout << (a ? "YES" : "NO") << endl;
    }
    return 0;
}