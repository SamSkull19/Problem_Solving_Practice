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
        int a, b, x, y, p, q;
        cin >> a >> b >> x >> y >> p >> q;

        int xa = p - x;
        int xb = q - y;
        
        int dx[8]={a, a, -a, -a, b, b, -b, -b};
        int dy[8]={b, -b, b, -b, a, -a , a, -a};

        int cnt = 0, n = 8;
        if(a == b) n = 4;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dx[i] - dx[j] == xa && dy[i] - dy[j] == xb){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}