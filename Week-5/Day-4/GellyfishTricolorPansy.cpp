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
        vector <pair<int, char>> v(4);
        int f = 0;
        for(auto &[x, y] : v){
            cin >> x;
            if(f) y = 'F';
            else y = 'G';
            f = !f;
        }
        sort(v.begin(), v.end());
        if(v[0].second == 'G') cout << "Flower" << endl;
        else cout << "Gellyfish" << endl;
    }
    return 0;
}