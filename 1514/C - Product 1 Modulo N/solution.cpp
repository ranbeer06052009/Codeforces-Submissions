#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
const int mod = 1e9 + 7;
const int MAXM=1e7;
// Captain levi Ackerman:
//  "The only thing we're allowed to do is believe that we won't regret the choice we made."
//  "The world doesn’t care about your pain — only your will to rise again."
//  " Sometimme to find the way you must loose yourself in the grind"
//  " No matter what kind of wisdom dictates the option you should pick No one will be able to tell if it's right or wrong until you arrive at some sort of outcome"
 
// Eren yeager:
// "If you win, you live. If you lose, you die. If you don't fight, you can't win! So Fight ! Just Fight!"
// "You'll Never Know. If You're Not The One Who's Continuing To Take That Path... Unless You Keep Moving Forward."
 
// Commander Erwin Smith :
// "If you begin to regret, you’ll dull your future decisions and let others make your choices for you. Nobody can foretell the outcome. Each decision you make holds meaning only by affecting your next decision."
 
 
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
void swap(ll &a, ll &b){
    ll temp=a;
    a=b;
    b=temp;
}
ll gcd(ll a, ll b) {
    while(b) { 
        a %= b; 
        swap(a, b); 
    } 
    return a; 
}
 
ll lcm(ll a, ll b) { 
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b; 
}
// ll nCr(int n, int r) {
//     if(r< 0||r> n) return 0;
//     if(r== 0 || r == n) return 1;
//     if(r > n / 2) r = n - r;
//     ll ans = 1;
//     for (int i = 1; i <= r; i++) {
//         ans =ans*(n-i+1)/i;
//     }
//     return ans;
// }
int phi(int n,vector<bool> &d){
    int res=n;
    int og=n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }    
            res-=res/i;
            for(int j=i;j<=og;j+=i){
                d[j]=true;
            }
        }
    }
    if(n>1){
        res-=res/n;
        for(int j=n;j<=og;j+=n){
            d[j]=true;
        }
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
    vector<bool> d(n+1,false);
    int p=phi(n,d);
    d[n]=true;
    vector<int> res,ans;
    ll prod=1;
    for(int i=1; i<=n; i++){
        if(!d[i]){
            // cout<<i<<" ";
            prod=(prod*i)%n;
            res.push_back(i);
        }
    }
    if(prod==1){
        ans=res;
    }else{
        for(int i=0; i<res.size(); i++){
            if(res[i]!=prod){
                ans.push_back(res[i]);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return;
}
 
int main()
{
    fastio();
    int tt = 1;
    //cin >> tt;
    while (tt--)
    {
        solve();
        cout << '
';
    }
    return 0;
}