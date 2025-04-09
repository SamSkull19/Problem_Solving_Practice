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

        vector <ll> v(n);
        set <ll> st;
        for(auto &x : v){
            cin >> x;
            st.insert(x);
        }

        sort(v.rbegin(), v.rend());
        ll x, y;
        bool flag = false;
        
        for(int i=1; i<n; i++){
            ll s = v[i-1] + v[i];
            if(st.find(s) == st.end()){
                x = v[i-1];
                y = v[i];
                flag = true;
                break;
            }
        }

        if(!flag){
            for(int i=0; i<n; i++){
                ll s = v[i] + v[i];
                if(st.find(s) == st.end()){
                    x = v[i];
                    y = v[i];
                    flag = true;
                    break;
                }
            }
        }

        if(flag){
            cout << x << " " << y << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}