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
        int n, m;
        string a, b, c;
        cin >> n >> a >> m >> b >> c;

        string x, y;
        for(int i=0; i<m; i++){
            if(c[i] == 'V'){
                x += b[i];
            }
            else{
                y += b[i];
            }
        }
        reverse(x.begin(), x.end());
        cout << x << a << y << endl;
    }
    return 0;
}