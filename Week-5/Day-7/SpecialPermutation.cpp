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

        int x = (n % 2 ? (n + 1) / 2 : n / 2);
        for(int i=n; i>x; i--){
            cout << i << " ";
        }
        for(int i=x-1; i>=1; i--){
            cout << i << " ";
        }
        cout << x << endl;
    }
    return 0;
}