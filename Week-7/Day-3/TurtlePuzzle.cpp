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
        int sum = 0;
        for(auto &x : v){ 
            cin >> x;
            sum += abs(x);
        }

        cout << sum << endl;
    }
    return 0;
}