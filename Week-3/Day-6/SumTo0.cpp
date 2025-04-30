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

        if(n == 1){
            cout << -1 << endl;
            continue;
        }

        if(n % 2 == 0){
            for(int i=1; i<=n / 2; i++){
                cout << 3 << " " << -3 << " ";
            }
        }

        else{
            cout << 1 << " " << 2 << " " << -3 << " "; 
            for(int i=1; i<=(n - 3) / 2; i++){
                cout << 3 << " " << -3 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}