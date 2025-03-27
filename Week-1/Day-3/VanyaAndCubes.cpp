#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x = 0, cnt = 0;
    while(x <= n){
        cnt++;
        x += (cnt * (cnt + 1) / 2);
    }
    cout << cnt - 1 << endl;
    return 0;
}