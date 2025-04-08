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

        vector <int> l(n + 1), r(n + 1), cnt(2 * n + 1, 0), sum(2 * n + 1, 0);
        for(int i=1; i<=n; i++){
            cin >> l[i] >> r[i];
            if(l[i] == r[i]){
                sum[l[i]] = 1;
                cnt[l[i]]++;
            }
        }
        
        for(int i=2; i<=2 * n; i++){
            sum[i] += sum[i-1];
        }

        string s;
        for(int i=1; i<=n; i++){
            if(l[i] == r[i]){
                if(cnt[l[i]] == 1){
                    s += '1';
                }
                else{
                    s += '0';
                }
            }
            else{
                if(sum[r[i]] - sum[l[i] - 1] < r[i] - l[i] + 1){
                    s += '1';
                }
                else{
                    s += '0';
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}