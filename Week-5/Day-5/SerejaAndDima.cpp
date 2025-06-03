#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> v(n);
    for(auto &x : v) cin >> x;

    int l = 0, r = n-1;
    int a = 0, b = 0, x = 0;

    while(l <= r){
        if(v[l] >= v[r]){
            if(!x) a += v[l];
            else b += v[l];
            l++;
            x = !x;
        }
        else{
            if(!x) a += v[r];
            else b += v[r];
            r--;
            x = !x;
        }
    }

    cout << a << " " << b << endl;
    return 0;
}