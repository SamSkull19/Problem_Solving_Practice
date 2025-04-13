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
        int n, m, k;
        cin >> n >> m >> k;

        vector <int> a(n), b(m);
        map <int, int> mpa, mpb;

        for(auto &x : a){ 
            cin >> x;
            if(x <= k){
                mpa[x]++;
            }
        }
        for(auto &x : b){ 
            cin >> x;
            if(x <= k){
                mpb[x]++;
            }
        }

        int flag = 1;
        int cnt = 0, cntA = 0, cntB = 0;
        for(int i=1; i<=k; i++){
            if(mpa[i] && mpb[i]){
                cnt++;
            }
            else if(mpa[i]){
                cntA++;
            }
            else if(mpb[i]){
                cntB++;
            }
            else{
                flag = 0;
                break;
            }
        }

        if(!flag){ 
            cout << "NO" << endl;
            continue;
        }

        if(cntA > k / 2 || cntB > k / 2){ 
            cout << "NO" << endl;
        }
        else{ 
            cout << "YES" << endl;
        }
    }
    return 0;
}