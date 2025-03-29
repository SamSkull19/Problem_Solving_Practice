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

        int a = 0, b = 0;
        for(int i=0; i<5; i++){
            if(s[i] == 'A') a++;
            if(s[i] == 'B') b++;
        }

        cout << ((a > b) ? "A" : "B") << endl;
    }
    return 0;
}