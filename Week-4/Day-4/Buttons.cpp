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
        int a, b, c;
        cin >> a >> b >> c;

        int d = (c + 1) / 2;
        int x = a + d;
        int y = b + (c - d);
        if(x > y){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
    return 0;
}