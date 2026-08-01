#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/allocator.h>
#pragma GCC target("avx2")
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
 
 
/* ---------------- pbds (order statistics tree) ---------------- */
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <class T, class Cmp = std::less<T>>
using ordered_set =
    tree<T, null_type, Cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
template <class T, class Cmp = std::less_equal<T>>
using ordered_multiset =
    tree<T, null_type, Cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
/* ---------------- aliases ---------------- */
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using mii = map<int, int>;
using mll = map<ll, ll>;
 
constexpr ll MOD = 1000000007;
 
/* ---------------- handy macros & helpers ---------------- */
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define ls(u) (u << 1)
#define rs(u) (u << 1 | 1)
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define F first
#define S second
 
/* ---------------- Number Theory ---------------- */
ll extGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
    g= extGCD(abs(a), abs(b), x0, y0);
    if (c%g!= 0) {
        return false;
    }
 
    x0*=c/g;
    y0*=c/g;
    if(a<0)x0= -x0;
    if(b<0)y0= -y0;
    return true;
}
 
vll sieve(int n) {
    vll primes;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) isPrime[j] = false;
        }
    }
    return primes;
}
 
vector<pair<ll, ll>> primeFactors(ll n) {
    vector<pair<ll, ll>> factors;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            ll count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            factors.emplace_back(i, count);
        }
    }
    if (n > 1) {
        factors.emplace_back(n, 1);
    }
    return factors;
}
 
ll phi(ll n) {
    ll result = n;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1) {
        result -= result / n;
    }
    return result;
}
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
ll nCr(int n, int r) {
    if(r< 0||r> n) return 0;
    if(r== 0 || r == n) return 1;
    if(r > n / 2) r = n - r;
    ll ans = 1;
    for (int i = 1; i <= r; i++) {
        ans =ans*(n-i+1)/i;
    }
    return ans;
}
ll crt(ll r1, ll m1, ll r2, ll m2){
    ll x,y;
    ll g=extGCD(m1,m2,x,y);
    if((r2-r1)%g!=0)return -1;
    ll m=m1/g*m2;
    ll temp=r1+x*((r2-r1)/g)%(m2/g)*m1;
    ll t=(temp%m+m)%m;
    return t;
} 
/* Bitwise */
ll msb(ll n) { return n ? 63 - __builtin_clzll(n) : -1; }
 
ll bitPos(ll val, ll pos) { return ((1ll << pos) & val) > 0; }
 
/* ------------- main solve function ------------- */
void solve(){
    int n;
    string s;
    cin>>s;
    n=s.size();
    string st="";
    rep(i,0,n-1){
        if(s[i]=='0'){
            string p=s.substr(0,i)+s.substr(i+1);
            int id=p.find('1');
            if(id!=p.size()){
                p.erase(id,1);
            }
            st=max(st,p);
        }
    }
    cout<<st;
    return;
}
 
int main(){
    fastio();
    int tt = 1;
    cin >> tt;
    while (tt--){
        solve();
        cout <<"
";
    }
    return 0;
}