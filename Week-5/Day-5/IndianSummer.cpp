#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    set <string> st;
    while(t--){
        string s, x;
        cin >> s >> x;
        st.insert(s + " " + x);
    }

    cout << (int)st.size() << endl;
    return 0;
}