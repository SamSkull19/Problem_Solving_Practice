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

        string s, r;
        cin >> s >> r;

        r.pop_back();
        int x = count(s.begin(), s.end(), '1');
        int y = n - 1 - count(r.begin(), r.end(), '1');

        if(x == y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}