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

        vector <int> v(n-1);
        int x = 1000;

        for(int i=0; i<n-1; i++){
            cin >> v[i];
        }

        cout << x << " ";
        for(auto i : v){
            x += i;
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}