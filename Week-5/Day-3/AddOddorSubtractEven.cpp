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
        int a, b;
        cin >> a >> b;

        if(a == b){
            cout << 0 << endl;
            continue;
        }

        if(a < b){
            if((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1)){
                cout << 2 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else{
            if((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1)){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
    }
    return 0;
}