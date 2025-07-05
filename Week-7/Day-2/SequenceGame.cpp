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

        vector <int> v(n), x;
        for(auto &i : v) cin >> i;

        x.push_back(v[0]);
        for(int i=1; i<n; i++){
            if(v[i] < v[i-1]){
                x.push_back(v[i]);
            }
            x.push_back(v[i]);
        }

        cout << (int)x.size() << endl;
        for(auto &i : x){ 
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}