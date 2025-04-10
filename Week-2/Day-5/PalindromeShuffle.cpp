#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool checkMid(string s, int l, int r){
    while(l <= r){
        if(s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}

bool checkPrefix(string s, int l, int r, int x){
    vector <int> cnt(26, 0);
    for(int i=0; i<x; i++){
        char ch = s[l + i];
        cnt[ch - 'a']++;
    }

    for(int i=0; i<x && (r - i) > (l + x - 1); i++){
        char ch = s[r - i];
        if(cnt[ch - 'a'] <= 0){
            return false;
        }
        cnt[ch - 'a']--;
    }
    return true;
}

int solve(string s){
    int n = (int)s.size();
    int x = 0, y = n - 1;

    while(s[x] == s[y] && x < y){
        x++, y--;
    }
    if(x > y) return 0;

    int l = 0, r = y - x + 1, mid, ans;
    while(l <= r){
        mid = (l + r) / 2;
        int midL = x + mid, midR = y - mid;

        bool p = checkMid(s, midL, midR);
        bool q = checkPrefix(s, x, y, mid);

        if(p && q){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int ans = solve(s);
        reverse(s.begin(), s.end());

        ans = min(ans, solve(s));
        cout << ans << endl;
    }
    return 0;
}