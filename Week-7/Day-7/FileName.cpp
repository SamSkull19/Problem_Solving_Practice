#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = 0, r = 0, cnt = 0;
    while(r < n){
        if(s[r] == 'x'){
            l = r;
            while(r < n && s[r] == 'x'){
                r++;
            }
            cnt += max(0, (r - l) - 2);
            l = r;
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}