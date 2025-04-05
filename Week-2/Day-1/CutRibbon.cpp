#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

vector <int> a(4005, -1e9);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector <int> v(3);
    cin >> n >> v[0] >> v[1] >> v[2];

    a[0] = 0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<3; j++){
            if(v[j] <= i){
                a[i] = max(a[i], a[i - v[j]] + 1);
            }
        }
    }
    cout << a[n] << endl;
    return 0;
}