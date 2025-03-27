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
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        int m;
        cin >> m;
        
        for(int i=0; i<m; i++){
            string s;
            cin >> s;

            if((int)s.size() != n){
                cout << "NO" << endl;
                continue; 
            }

            map <int, char> mpx;
            map <char, int> mpy;
            int x = 1;

            for(int i=0; i<n; i++){
                int a = v[i];
                char c = s[i];

                if((mpx.count(a) && mpx[a] != c) || (mpy.count(c) && mpy[c] != a)){
                    x = 0;
                    break;
                }

                mpx[a] = c;
                mpy[c] = a;
            }
            
            cout << (x ? "YES" : "NO") << endl;
        }
    }
    return 0;
}