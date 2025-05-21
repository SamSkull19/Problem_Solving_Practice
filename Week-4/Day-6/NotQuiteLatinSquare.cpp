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
        vector <string> v(3);
        for(auto &x : v){ 
            cin >> x;
        }

        char ans;
        for(int i=0; i<3; i++){
            set <int> st;
            for(int j=0; j<3; j++){
                st.insert(v[i][j]);
            }
            if(!st.count('A')){
                ans = 'A';
                break;
            }
            else if(!st.count('B')){
                ans = 'B';
                break;
            }
            else if(!st.count('C')){
                ans = 'C';
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}