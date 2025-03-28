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
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int cnt = 0;
        if((a >= x && b > y) || (a > x && b >= y)){
            cnt++;
        }
        if((a >= y && b > x) || (a > y && b >= x)){
            cnt++;
        }
        cout << cnt * 2 << endl;
    }
    return 0;
}