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
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int x;
        if(m <= -l){
            x = m;
        }
        else{
            x = -l;
        }
        cout << -x << " " << m - x << endl;
    }
    return 0;
}