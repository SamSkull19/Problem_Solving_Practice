#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map <string, string> mpa, mpb;
    for(int i=0; i<q; i++){
        string a, b;
        cin >> a >> b;

        if(mpb.count(a)){
            string s = mpb[a];
            mpa[s] = b;
            mpb.erase(a);
            mpb[b] = s;
        }
        else{
            mpa[a] = b;
            mpb[b] = a;
        }
    }

    cout << (int)mpa.size() << endl;
    for(auto [x, y] : mpa){
        cout << x << " " << y << endl;
    }
    return 0;
}