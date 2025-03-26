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

        string s = "aeiou";
        string x;
        for(int i=0; i<n; i++){
            x += s[i % 5];
        }

        sort(x.begin(), x.end());
        cout << x << endl;
    }
    return 0;
}