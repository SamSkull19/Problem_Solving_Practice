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

        vector <pair<int, int>> v;
        for(int i=0; i<n; i++){
            int x, y;
            cin >> x >> y;
            if(x <= 10){
                v.push_back({y, i + 1});
            }
        }
        sort(v.rbegin(), v.rend());
        cout << v.front().second << endl;
    }
    return 0;
}