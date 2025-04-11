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

        for(int i=1; i<n-1; i++){
            int x = v[i-1];
            v[i - 1] = 0;
            v[i] -= (x * 2);
            v[i + 1] -= x;
            if(v[i] < 0 || v[i+1] < 0){
                break;
            }
        }

        int x = count(v.begin(), v.end(), 0);
        if(x == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}