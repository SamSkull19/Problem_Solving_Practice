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

        vector <int> a(n), b(n), c;
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        
        c = b;
        reverse(c.begin(), c.end());

        if(a == b || a == c){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }
    return 0;
}