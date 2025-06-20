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

        int a = (1 << n);
        int x = n / 2;
        int b = 0;

        for(int i=1; i<x; i++){
            a += (1 << i);
        }
        for(int i=x; i<n; i++){
            b += (1 << i);
        }

        cout << a - b << endl;
    }
    return 0;
}