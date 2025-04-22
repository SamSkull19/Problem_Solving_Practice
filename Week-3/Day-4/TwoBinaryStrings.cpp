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
        string a, b;
        cin >> a >> b;

        int n = (int)a.size();
        string s = "NO";

        for(int i=0; i<n-1; i++){
            if(a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1'){
                s = "YES";
                break;
            }
            
        }
        cout << s << endl;
    }
    return 0;
}