#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n % 2 == 1){
        cout << -1 << endl;
    }
    else{
        for(int i=1; i<=n; i+=2){
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }
    return 0;
}