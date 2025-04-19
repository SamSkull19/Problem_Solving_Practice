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

        string s;
        cin >> s;

        int x = 1, y = n;
        vector <int> v, a(n + 1, 0);

        for(int i=n-2; i>=0; i--){
            if(s[i] == '<'){
                v.push_back(x);
                a[x] = 1;
                x++;
            }
            if(s[i] == '>'){
                v.push_back(y);
                a[y] = 1;
                y--;
            }
        }
        
        for(int i=1; i<=n; i++){
            if(!a[i]){
                v.push_back(i);
                break;
            }
        }

        reverse(v.begin(), v.end());
        for(auto u : v){
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}