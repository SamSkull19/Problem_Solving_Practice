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

        vector <int> a(n + 1), b(n + 1), pos(n + 1);
        vector <pair<int, int>> v;

        for(int i=1; i<=n; i++){
            cin >> a[i];
            pos[a[i]] = i;
        }
        for(int i=1; i<=n; i++){
            cin >> b[i];
        }
        
        int cnt = 0;
        for(int i=1; i<=n; i++){
            if(a[i] == b[i]){
                cnt++;
            }
        }

        if(cnt > 0){
            if(n % 2 == 0){
                cout << -1 << endl;
                continue;
            }
            if(n % 2 == 1 && cnt > 1){
                cout << -1 << endl;
                continue;
            }
        }

        int fl = 1, idx = 0;
        for(int i=1; i<=n; i++){
            if(a[i] == b[i]){
                idx = i;
            }
            if(b[pos[b[i]]] != a[i]){
                fl = 0;
                break;
            }
        }

        if(!fl){
            cout << -1 << endl;
            continue;
        }

        auto posChange = [&](int x, int y){
            if(x == y) return;
            v.push_back({x, y});
            swap(a[x], a[y]);
            swap(pos[a[x]], pos[a[y]]);
            swap(b[x], b[y]);
        };

        if(n % 2 == 1){
            posChange(idx, (n + 1) / 2);
        }
        for(int i=1; i<=n; i++){
            posChange(pos[b[i]], n - i + 1);
        }

        cout << (int)v.size() << endl;
        for(auto [x, y] : v){
            cout << x << " " << y << endl;
        }
    }
    return 0;
}