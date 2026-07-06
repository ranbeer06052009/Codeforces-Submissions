#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
// int lcm(int a, int b) {
//     return (a*b)/__gcd(a, b);
// }
// // Returns gcd(a, b) and updates x and y to solve: ax + by = gcd(a, b)
// int extGCD(int a, int b, int &x, int &y) {
//     if (b == 0) {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     int x1, y1;
//     int d = extGCD(b, a % b, x1, y1);
//     x = y1;
//     y = x1 - y1 * (a / b);
//     return d;
// }
// bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
//     g= extGCD(abs(a), abs(b), x0, y0);
//     if (c%g!= 0) {
//         return false;
//     }
    
//     x0*=c/g;
//     y0*=c/g;
//     if(a<0)x0= -x0;
//     if(b<0)y0= -y0;
//     return true;
// }
 
// //Topological Sort
// vector<int> topoSort(int &V, vector<vector<int>> adj){
//     int indegree[V];
//     for(int i=0; i<V; i++)indegree[i]=0;
//     for(int i=0; i<V; i++){
//         for(auto it:adj[i]){
//             indegree[it]++;
//         }
//     }
//     queue<int> q;
//     for(int i=0; i<V; i++){
//         if(indegree[i]==0)q.push(i);
//     }
//     vector<int> topo;
//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         topo.push_back(node);
//         for(auto it:adj[node]){
//             indegree[it]--;
//             if(indegree[it]==0)q.push(it);
//         }
//     }
//     return topo;
// }
 
// bool palindrome(ll n){
//     string num=to_string(n);
//     int l=0,r=num.size()-1;
//     while(l<r){
//         if(num[l]!=num[r])return false;
//         l++;
//         r--;
//     }
//     return true;
// }
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1,0),b(n+1,0),c(n+1,0);
    int cnt=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]!=a[i-1]){
            cnt++;
        }
        b[a[i]]++;
    }
    sort(b.begin(),b.end());
    int j=0;
    for(int i=1; i<=n; i++){
        if(b[i]>=1){
            j=i;
            break;
        }
    }
    vector<ll> S(n+2, 0);
    for(int i = n; i >= j; i--){
        S[i] = S[i+1] + b[i];
    }
    int ans=0;
    for(int i = j; i <= n; i++){
        if (i == j || b[i] != b[i-1]) {
            
            ll V = b[i];           
            ll C = n - i + 1;      
            ll sum_surv = S[i];    
 
            ll diff = k - sum_surv;
            if (abs(diff) % C == 0) {
                ll delta = diff / C;
                if (V + delta >= 1) {
                    ans++;
                }
            }
        }
    }
    
    cout << ans;
    return;
}
 
int main(){
    fastio();
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<'
';
    }
    return 0;
}