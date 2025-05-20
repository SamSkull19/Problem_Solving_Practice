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
        int n;
        cin >> n;

        for(int i=1; i<=n; i+=2){
            for(int j=i; j<=n; j*=2){
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}