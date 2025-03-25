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

        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(v[i] != i+1){
                if(abs(v[i] - v[i+1]) == 1){
                    swap(v[i], v[i+1]);
                    
                    if(v[i] != i + 1){
                        flag = false;
                        break;
                    }
                }
                else{
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}