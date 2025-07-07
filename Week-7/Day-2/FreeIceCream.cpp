#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;

    int cnt = 0;
    for(int i=1; i<=n; i++){
        char c;
        int d;
        cin >> c >> d;

        if(c == '+'){
            x += d;
        }
        else{
            if(d > x){
                cnt++;
            }
            else{
                x -= d;
            }
        }
    }
    cout << x << " " << cnt << endl;
    return 0;
}