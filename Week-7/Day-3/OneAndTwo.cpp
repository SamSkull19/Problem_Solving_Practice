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
        int a = 0;
        for(int i=0; i<n; i++){ 
            cin >> v[i];
            if(v[i] == 2) a++;
        }

        if(a == 0){
            cout << 1 << endl;
            continue;
        }

        if(a % 2 != 0){
            cout << -1 << endl;
            continue;
        }
        
        int cnt = 0, idx = -1;
        for(int i=0; i<n; i++){
            if(v[i] == 2){
                cnt++;
                if(cnt == a / 2){
                    idx = i + 1;
                    break;
                }
            }
        }
        cout << idx << endl;
    }
    return 0;
}