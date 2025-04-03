#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = (int)s.size();
    vector <pair<int, int>> v;
    int x = 0;

    for(int i=0; i<n; i++){
        v.push_back({x, n - i});
        if(s[i] == '(') x++;
        else x--;
    }

    sort(v.begin(), v.end());
    for(auto [x, y] : v){
        cout << s[n - y];
    }
    cout << endl;
    return 0;
}