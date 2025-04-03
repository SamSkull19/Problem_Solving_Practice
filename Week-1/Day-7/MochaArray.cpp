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

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int x = 0;
        for(int i=0; i<n; i++){
            if(v[i] % v[0]){
                x = i;
                break;
            }
        }

        if(x == 0){
            cout << "YES" << endl;
            continue;
        }

        int a = 1;
        for(int i=x+1; i<n; i++){
            if(v[i] % v[0] != 0 && v[i] % v[x] != 0){
                a = 0;
            }
        }

        if(a){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}