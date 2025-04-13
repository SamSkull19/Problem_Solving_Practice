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

        vector <vector<int>> v(n, vector <int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> v[i][j];
            }
        }

        int m = 2 * n;
        vector <int> x(m + 1, 0);
        for(int i=2; i<=m; i++){
            int a = max(1, i-n);
            int b = i - a;
            x[i] = v[a - 1][b - 1];
        }

        set <int> st;
        for(int i=2; i<=m; i++){
            st.insert(x[i]);
        }
        
        for(int i=1; i<=m; i++){
            if(st.find(i) == st.end()){
                x[1] = i;
                break;
            }
        }

        for(int i=1; i<=m; i++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
    return 0;
}