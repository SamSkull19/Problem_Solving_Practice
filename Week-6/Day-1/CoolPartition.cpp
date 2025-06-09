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
        for(auto &i : v) cin >> i;

        set <int> st, tm;
        int cnt = 0;

        for(auto x : v){
            tm.insert(x);

            if(st.count(x)){
                st.erase(x);
            }
            if(st.size() == 0){
                st = tm;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}