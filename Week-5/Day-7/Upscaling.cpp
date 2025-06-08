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

        n = 2 * n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int x = (i-1) / 2;
                int y = (j-1) / 2;

                if((x + y) % 2 == 0){
                    cout << '#';
                }
                else{
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
    return 0;
}