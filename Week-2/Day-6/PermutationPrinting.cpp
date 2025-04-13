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
        
        int x = 1, y = n;
        for(int i=1; i<=n; i++){
            if(i % 2 == 0){
                cout << y << " ";
                y--;
            }
            else{
                cout << x << " ";
                x++;
            }
        }
        cout << endl;
    }
    return 0;
}