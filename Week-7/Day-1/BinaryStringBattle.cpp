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
        int n, k;
        string s;
        cin >> n >> k >> s;

        int x = count(s.begin(), s.end(), '1');
        if(k >= x || n / 2 < k){
            cout << "Alice" << endl;
            continue;
        }
        else{
            cout << "Bob" << endl;
        }
    }
    return 0;
}