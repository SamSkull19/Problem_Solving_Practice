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

        vector <int> v(n);
        int x = 1, l = 0, r = n-1;
        for(int i=0; i<n; i++){
            if(i % 2 == 0){ 
                v[l] = x++;
                l++;
            }
            else{ 
                v[r] = x++;
                r--;
            }
        }

        for(auto x : v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}