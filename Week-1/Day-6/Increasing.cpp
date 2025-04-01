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

        set <int> s;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }

        cout << (n == (int)s.size() ? "YES" : "NO") << endl;
    }
    return 0;
}