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
        set <int> s;
        for(int i=0; i<n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }        

        for(auto i : s){
            x.push_back(i);
        }

        int ans = 1;
        for(int i=0; i<(int)x.size() - 1; i++){
            if(x[i + 1] && x[i] + 1 >= x[i + 1]) x[i + 1] = 0; 
            else ans++;
        }

        cout << ans << endl;
    }
    return 0;
}