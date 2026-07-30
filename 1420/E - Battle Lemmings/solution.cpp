#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
// Captain levi Ackerman:
 /*"The only thing we're allowed to do is believe that we won't regret the choice we made."
 "The world doesn’t care about your pain — only your will to rise again."
 " Sometimme to find the way you must loose yourself in the grind"
 " No matter what kind of wisdom dictates the option you should pick No one will be able to tell if it's right or wrong until you arrive at some sort of outcome"*/
 
// Eren yeager:
/*"If you win, you live. If you lose, you die. If you don't fight, you can't win! So Fight ! Just Fight!"
"You'll Never Know. If You're Not The One Who's Continuing To Take That Path... Unless You Keep Moving Forward."*/
 
// Commander Erwin Smith :
/*"If you begin to regret, you’ll dull your future decisions and let others make your choices for you. Nobody can foretell the outcome. Each decision you make holds meaning only by affecting your next decision."*/
 
#define INF (int)1e18
 
void solve(){
    int n; cin >> n;
    
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    
    vector <int> b;
    b.push_back(0);
    for (int i = 0; i < n; i++) if (a[i]) b.push_back(i + 1);
    
    int m = b.size() - 1;
    
    int v = n * (n - 1) / 2 + 1;
    
    int dp[n + 1][v][m + 1];
    for (int i = 0; i <= n; i++) for (int j = 0; j < v; j++) for (int k = 0; k <= m; k++){
        dp[i][j][k] = INF;
    }
    
    dp[0][0][0] = 0;
    for (int i = 0; i < n; i++) for (int j = 0; j < v; j++) for (int k = 0; k < m; k++) if (dp[i][j][k] < INF){
        if (j != 0 && dp[i][j][k] >= dp[i][j - 1][k]) continue;
        
     //   cout << "AT " << i << " " << j << " " << k << "
";
        for (int i1 = i + 1; i1 <= n; i1++){
            int run = i1 - i - 1;
            int cnt = run * (run - 1) / 2;
            int diff = j + abs(b[k + 1] - i1);
            
          //  cout << "GOING " << i1 << " " << diff << " " << k + 1 << "
";
            
            assert(diff < v);
            
            dp[i1][diff][k + 1] = min(dp[i1][diff][k + 1], dp[i][j][k] + cnt);
        }
    }
    
    int mn = INF;
    int tot = (n - m) * (n - m - 1) / 2;
    for (int i = 0; i < v; i++){
        for (int end = 0; end <= n; end++){
            if (dp[end][i][m] < INF){
                int run = n - end;
                int cnt = run * (run - 1) / 2;
                
                mn = min(mn, cnt + dp[end][i][m]);
            }
        }
        
        cout << tot - mn << " ";
    }
    cout << "
";
    return ;
}
int main(){
    fastio();
    int tt = 1;
    //cin >> tt;
    while (tt--){
        solve();
        //cout <<"
";
    }
    return 0;
}