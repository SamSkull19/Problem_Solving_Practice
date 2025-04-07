#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector <char> v(n * m);
    int a = 1;
    for(auto &x : v){
        cin >> x;
        if(x == 'C' || x == 'M' || x == 'Y'){
            a = 0;
        }
    }

    if(a) cout << "#Black&White" << endl;
    else cout << "#Color" << endl;
    return 0;
}