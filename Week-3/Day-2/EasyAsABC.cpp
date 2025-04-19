#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

vector <string> v(3);
bool visited[3][3];
string ans = "CCC";
vector <pair<int, int>> d = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 1}, {1, 1}};

void dfs(int i, int j, string st){
    visited[i][j] = true;
    st += v[i][j];

    if(st.size() == 3){
        ans = min(ans, st);
        visited[i][j] = false;
        return;
    }

    for(auto [x, y] : d){
        int a = x + i;
        int b = y + j;

        if(!visited[a][b] && a >= 0 && b >= 0 && a < 3 && b < 3){
            dfs(a, b, st);
        }
    }
    visited[i][j] = false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    for(auto &x : v) cin >> x;
    memset(visited, false, sizeof(visited));

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            string x;
            dfs(i, j, x);
        }
    }
    cout << ans << endl;
    return 0;
}