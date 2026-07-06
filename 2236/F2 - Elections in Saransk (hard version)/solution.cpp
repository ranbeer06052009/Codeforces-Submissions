#include <bits/stdc++.h>
 
using namespace std;
using ll=unsigned long long;
const int MOD=1e9+7;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int lcm(int a, int b) {
    return (a*b)/__gcd(a, b);
}
// Returns gcd(a, b) and updates x and y to solve: ax + by = gcd(a, b)
int extGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
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
 
//Topological Sort
vector<int> topoSort(int &V, vector<vector<int>> adj){
    int indegree[V];
    for(int i=0; i<V; i++)indegree[i]=0;
    for(int i=0; i<V; i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i=0; i<V; i++){
        if(indegree[i]==0)q.push(i);
    }
    vector<int> topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0)q.push(it);
        }
    }
    return topo;
}
 
bool palindrome(ll n){
    string num=to_string(n);
    int l=0,r=num.size()-1;
    while(l<r){
        if(num[l]!=num[r])return false;
        l++;
        r--;
    }
    return true;
}
 
const int MAX_VAL = 500005;
 
int spf[MAX_VAL];
void sieve() {
    for (int i = 1; i < MAX_VAL; i++) spf[i] = i;
    for (int i = 2; i * i < MAX_VAL; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX_VAL; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}
 
vector<pair<int, int>> factorize(int y) {
    vector<pair<int, int>> res;
    while (y > 1) {
        int p = spf[y];
        int cnt = 0;
        while (y % p == 0) {
            cnt++;
            y /= p;
        }
        res.push_back({p, cnt});
    }
    return res;
}
vector<long long> poly_mul(const vector<long long>& a, const vector<long long>& b, int max_deg) {
    if (a.empty() || b.empty()) return {};
    vector<long long> res(min((int)a.size() + (int)b.size() - 1, max_deg + 1), 0);
    for (int i = 0; i < a.size(); ++i) {
        if (!a[i]) continue;
        for (int j = 0; j < b.size() && i + j <= max_deg; ++j) {
            res[i+j] = (res[i+j] + a[i] * b[j]) % MOD;
        }
    }
    return res;
}
vector<long long> poly_pow(vector<long long> base, int exp, int max_deg) {
    vector<long long> res = {1};
    while (exp > 0) {
        if (exp % 2 == 1) res = poly_mul(res, base, max_deg);
        base = poly_mul(base, base, max_deg);
        exp /= 2;
    }
    return res;
}
long long sum_v[MAX_VAL];
int prime_to_idx[MAX_VAL];
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
 
    vector<pair<int, int>> x_factors = factorize(x);
    int num_x_primes = x_factors.size();
    vector<vector<int>> x_limits(num_x_primes);
 
    for (int i = 0; i < num_x_primes; ++i) {
        prime_to_idx[x_factors[i].first] = i;
    }
 
    vector<int> touched_primes;
 
    for (int i = 0; i < n; ++i) {
        int y = a[i];
        while (y > 1) {
            int p = spf[y];
            int cnt = 0;
            while (y % p == 0) {
                cnt++;
                y /= p;
            }
            if (prime_to_idx[p] != -1) {
                x_limits[prime_to_idx[p]].push_back(cnt);
            } 
            else {
                if (sum_v[p] == 0) touched_primes.push_back(p);
                sum_v[p] += cnt;
            }
        }
    }
 
    long long ans = 1;
    for (int p : touched_primes) {
        ans = (ans * ((1 + sum_v[p]) % MOD)) % MOD;
        sum_v[p] = 0;
    }
    for (int i = 0; i < num_x_primes; ++i) {
        int p = x_factors[i].first;
        int k = x_factors[i].second;
        const auto& lims = x_limits[i];
 
        if (lims.empty()) {
            ans = 0;
            break;
        }
 
        int max_L = 0;
        vector<int> count(19, 0);
        for (int l : lims) {
            max_L = max(max_L, l);
            if (l <= 18) count[l]++;
        }
        vector<vector<long long>> pref(max_L + 1);
        pref[0] = {1};
        for (int c = 1; c <= max_L; ++c) {
            vector<long long> base(c + 1, 1); 
            pref[c] = poly_mul(pref[c - 1], poly_pow(base, count[c], 36), 36);
        }
        auto W = [&](int M, int S) -> long long {
            if (S < 0) return 0;
            if (M < 0) return 0;
            if (M == 0) return S == 0 ? 1 : 0;
            
            int tail_count = 0;
            for (int L = M; L <= max_L; ++L) tail_count += count[L];
            
            if (tail_count == count[M]) {
                return S < pref[M].size() ? pref[M][S] : 0;
            }
            
            vector<long long> base(M + 1, 1);
            vector<long long> tail_poly = poly_pow(base, tail_count, S);
            vector<long long> res = poly_mul(pref[M - 1], tail_poly, S);
            return S < res.size() ? res[S] : 0;
        };
 
        long long ways_q = 0;
        for (int M = 0; M <= max_L; ++M) {
            long long w_M = W(M, M + k);
            long long w_M_minus_1 = W(M - 1, M + k);
            long long diff = (w_M - w_M_minus_1 + MOD) % MOD;
            ways_q = (ways_q + diff) % MOD;
        }
 
        ans = (ans * ways_q) % MOD;
    }
    for (auto f : x_factors) {
        prime_to_idx[f.first] = -1;
    }
 
    cout << ans;
}
int main(){
    fastio();
    sieve();
    fill(prime_to_idx, prime_to_idx + MAX_VAL, -1);
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<'
';
    }
    return 0;
}