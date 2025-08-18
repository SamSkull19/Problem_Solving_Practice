#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    
    int mn = min(a, b);
    int cnt = 0;

    for(int i=0; i<=mn; i++){
        for(int j=0; j<=mn; j++){
            if(i * i + j == a && i + j * j == b) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}