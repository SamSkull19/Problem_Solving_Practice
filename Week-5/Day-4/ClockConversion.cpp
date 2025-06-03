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
        string s, x, y;
        cin >> s;

        x = s.substr(0, 2);
        y = s.substr(3, 2);
        int a = stoi(x);
        
        string f = "AM";
        int b = a + (a == 0 ? 12 : 0);
        if(a > 12){
            b = a % 12;
        }
        if(a >= 12) f = "PM";

        cout << (b < 10 ? "0" : "") << b << ":" << y << " " << f << endl;
    }
    return 0;
}