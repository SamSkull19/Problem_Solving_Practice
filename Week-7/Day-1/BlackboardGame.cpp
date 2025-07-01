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

        if(n % 4 == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
    return 0;
}