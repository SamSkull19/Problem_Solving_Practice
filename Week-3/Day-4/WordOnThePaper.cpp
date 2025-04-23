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
        for(int i=0; i<64; i++){
            char c;
            cin >> c;
            if(c != '.'){
                s += c;
            }
        }
        cout << s << endl;
    }
    return 0;
}