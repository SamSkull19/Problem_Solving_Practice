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
        int n, a, b;
        cin >> n >> a >> b;

        int x = a * n;
        int y = (n / 2) * b + (n % 2) * a;
        cout << min(x, y) << endl;
    }
    return 0;
}