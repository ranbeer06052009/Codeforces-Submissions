#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const ll MOD = 1e9 + 7;
 
// ll gcd(ll a, ll b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// ll lcm(ll a, ll b) {
//     return ((ll)(a*b))/gcd(a, b);
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
ll power(ll base,ll exp){
    ll ans=1;
    base%=MOD;
    while(exp>0){
        if(exp&1)ans=(ans*base)%MOD;
        base=(base*base)%MOD;
        exp>>=1;
    }
    return ans;
}
 
void solve() {
    int n;
    cin >> n;
    
    int m = 0, p = 0, v = 0, c = 0, lp = -2;
 
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == -1) {
            m++;
        } else {
            p++;
            if (x != lp) {
                v++;
                if (lp != -2 && x == lp + 1) {
                    c++;
                }
                lp = x;
            }
        }
    }
 
    ll em = (m >= 1) ? power(2, m - 1) : 1;
    ll om = (m >= 1) ? power(2, m - 1) : 0;
    ll w = power(2, p - v);
    ll s = (em + (1LL * c * om) % MOD) % MOD;
    ll a = (s * w) % MOD;
    
    cout << a << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}