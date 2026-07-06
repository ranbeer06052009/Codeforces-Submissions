#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m;
    if(!(cin >> n >> m)) return 0;
    vector<string> g(n);
    int si = -1, sj = -1, ei = -1, ej = -1;
    for(int i = 0; i < n; i++){
        cin >> g[i];
        for(int j = 0; j < m; j++){
            if(g[i][j] == 'S'){ si = i; sj = j; }
            if(g[i][j] == 'T'){ ei = i; ej = j; }
        }
    }
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(16, INF)));
    queue<array<int, 3>> q;
    q.push({si, sj, 0});
    dp[si][sj][0] = 0;
    int ans = INF;
    while(!q.empty()){
        auto [i, j, val] = q.front();
        q.pop();
        if(i == ei && j == ej) ans = min(ans, dp[i][j][val]);
        int cd = val / 4, cc = val % 4;
        for(int d = 0; d < 4; d++){
            int ni = i + dx[d], nj = j + dy[d];
            if(ni >= 0 && ni < n && nj >= 0 && nj < m && g[ni][nj] != '#'){
                if(cd == d && cc == 3) continue;
                int nv = (cd == d) ? val + 1 : d * 4 + 1;
                if(dp[ni][nj][nv] == INF){
                    dp[ni][nj][nv] = dp[i][j][val] + 1;
                    q.push({ni, nj, nv});
                }
            }
        }
    }
    cout << (ans == INF ? -1 : ans) << "
";
    return 0;
}