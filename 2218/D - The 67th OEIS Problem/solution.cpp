#include <bits/stdc++.h>
using namespace std;
const int LIMIT = 200000;
 
vector<long long> nprime(){
    vector<bool>sieve(LIMIT,true);
    sieve[0]=sieve[1]=false;
    for(int i=2; (long long)i*i<LIMIT; i++){
        if(sieve[i]){
            for(int j=i*i; j<LIMIT; j+=i){
                sieve[j]=false;
            }
        }
    }
    vector<long long>primes;
    for(int i=2; i<LIMIT; i++){
        if(sieve[i])primes.push_back(i);
    }
    return primes;
}
void solve() {
    int n;
    cin>>n;
    vector<long long>primes=nprime();
    for(int i=0; i<n; i++){
        if(i>0)cout<<" ";
        cout<<primes[i]*primes[i+1];
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}