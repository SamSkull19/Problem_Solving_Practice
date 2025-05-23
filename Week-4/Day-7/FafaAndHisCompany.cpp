#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;
    for(int i=1; i<=n/2; i++){
        int x = n - i;
        if(x % i == 0){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}