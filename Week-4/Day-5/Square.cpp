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
        set <int> b;
        for(int i=1; i<=4; i++){
            int x, y;
            cin >> x >> y;
            b.insert(y);
        }

        int p = *b.begin();
        int q = *b.rbegin();

        int ar = q - p;
        cout << ar * ar << endl;
    }
    return 0;
}