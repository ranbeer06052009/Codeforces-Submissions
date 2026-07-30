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
 
//constexpr ll MOD = 1000000007;
 
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
// Computes Legendre's formula: number of times prime p divides x!
ll multiplicityP(ll x, ll p){
    ll count = 0;
    while(x > 0){
        count += x / p;
        x /= p;
    }
    return count;
}
 
/* Bitwise */
ll msb(ll n) { return n ? 63 - __builtin_clzll(n) : -1; }
 
ll bitPos(ll val, ll pos) { return ((1ll << pos) & val) > 0; }
 
/* Tourist Modular Template*/
template <typename T>
T inverse(T a, T m) {
    T u = 0, v = 1;
    while (a != 0) {
        T t = m / a;
        m -= t * a; swap(a, m);
        u -= t * v; swap(u, v);
    }
    assert(m == 1);
    return u;
}
 
template <typename T>
class Modular {
 public:
    using Type = typename decay<decltype(T::value)>::type;
 
    constexpr Modular() : value() {}
    template <typename U>
    Modular(const U& x) { value = normalize(x); }
 
    template <typename U>
    static Type normalize(const U& x) {
        Type v;
        if (-static_cast<long long>(T::value) <= x && x < static_cast<long long>(T::value)) v = static_cast<Type>(x);
        else v = static_cast<Type>(x % static_cast<long long>(T::value));
        if (v < 0) v += T::value;
        return v;
    }
 
    const Type& operator()() const { return value; }
    template <typename U> explicit operator U() const { return static_cast<U>(value); }
    constexpr static Type mod() { return T::value; }
 
    Modular& operator+=(const Modular& other) { if ((value += other.value) >= T::value) value -= T::value; return *this; }
    Modular& operator-=(const Modular& other) { if ((value -= other.value) < 0) value += T::value; return *this; }
    template <typename U> Modular& operator+=(const U& other) { return *this += Modular(other); }
    template <typename U> Modular& operator-=(const U& other) { return *this -= Modular(other); }
    Modular& operator++() { return *this += 1; }
    Modular& operator--() { return *this -= 1; }
    Modular operator++(int) { Modular result(*this); *this += 1; return result; }
    Modular operator--(int) { Modular result(*this); *this -= 1; return result; }
    Modular operator-() const { return Modular(-value); }
 
    template <typename U>
    Modular& operator*=(const U& other) { value = normalize(static_cast<long long>(value) * static_cast<long long>(Modular(other).value)); return *this; }
    Modular& operator/=(const Modular& other) { return *this *= Modular(inverse(other.value, T::value)); }
 
    template <typename U> friend bool operator==(const Modular<U>& lhs, const Modular<U>& rhs);
    template <typename U> friend bool operator<(const Modular<U>& lhs, const Modular<U>& rhs);
    template <typename U> friend std::ostream& operator<<(std::ostream& stream, const Modular<U>& number);
    template <typename U> friend std::istream& operator>>(std::istream& stream, Modular<U>& number);
 
 private:
    Type value;
};
 
template <typename T> bool operator==(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value == rhs.value; }
template <typename T, typename U> bool operator==(const Modular<T>& lhs, U rhs) { return lhs == Modular<T>(rhs); }
template <typename T, typename U> bool operator==(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) == rhs; }
template <typename T> bool operator!=(const Modular<T>& lhs, const Modular<T>& rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(const Modular<T>& lhs, U rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(U lhs, const Modular<T>& rhs) { return !(lhs == rhs); }
template <typename T> bool operator<(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value < rhs.value; }
 
template <typename T> Modular<T> operator+(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }
template <typename T> Modular<T> operator-(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T> Modular<T> operator*(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T> Modular<T> operator/(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }
 
template <typename T> std::ostream& operator<<(std::ostream& stream, const Modular<T>& number) { return stream << number.value; }
template <typename T> std::istream& operator>>(std::istream& stream, Modular<T>& number) { long long x; stream >> x; number.value = Modular<T>::normalize(x); return stream; }
 
/* ------------- main solve function ------------- */
const int MOD = 998244353;
using Mint = Modular<integral_constant<decay<decltype(MOD)>::type, MOD>>;
vector<Mint> fact(1, 1);
vector<Mint> inv_fact(1, 1);
 
Mint C(int n,int k){
    if(k<0||k>n)return 0;
    while(int(fact.size())<=n){
        fact.push_back(fact.back()*(int)fact.size());
        inv_fact.push_back(1/fact.back());
    }
    return fact[n]*inv_fact[k]*inv_fact[n-k];
}
void solve(){
    int n,k;
    cin>>n>>k;
    vi l(n),r(n);
    rep(i,0,n-1){
        cin>>l[i]>>r[i];        
    }
    vi order(n);
    iota(all(order),0);
    sort(all(order),[&](int i,int j){
        return l[i]<l[j];
    });
    Mint ans=0;
    multiset<int> rs;
    for(int i: order){
        while(!rs.empty()&& *rs.begin()<l[i]){
            rs.erase(rs.begin());
        }
        int cnt=(int)rs.size();
        ans+=C(cnt,k-1);
        rs.insert(r[i]);
    }
    cout<<ans;
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