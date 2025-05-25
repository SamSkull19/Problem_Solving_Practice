#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

class order{
    public:
        bool operator()(pair<ll, ll> a, pair<ll, ll> b){
            if(a.first != b.first) return a.first > b.first;
            else return a.second < b.second;
        }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector <pair<ll, ll>> v(n) ;
        for(int i=0; i<n; i++){
            ll x;
            cin >> x;

            ll y = (x + k - 1) / k;
            v[i].first = x - (y - 1) * k;
            v[i].second = i + 1;
        }

        sort(v.begin(), v.end(), order());
        for(auto [x, y] : v){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}