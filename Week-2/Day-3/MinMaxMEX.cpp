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
        int n, k;
        cin >> n >> k;

        vector <int> v(n);
        for(auto &x : v) cin >> x;

        auto ok = [&](int x){
            if(x == 0) return true;
            
            set <int> st;
            int s = 0;

            for(auto i : v){
                if(i < x){
                    st.insert(i);
                }
                if((int)st.size() == x){
                    s++;
                    st.clear();
                    if(s >= k){
                        return true;
                    }
                }
            }
            return s >= k;
        };

        int l = 0, r = n, mid, ans;
        while(l <= r){
            mid = (l + r) / 2;

            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}