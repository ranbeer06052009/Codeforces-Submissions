#include <bits/stdc++.h>
using namespace std;
 
bool chk(long long x) 
{
    long long cd = 0;
    long long cz = 0;
    while (x) 
    {
        if (x % 10 == 0) 
            cz++;
        cd++;
        x /= 10;
    }
    return cz == cd - 1;
}
 
int main()
{
    vector<long long> r;
    for (long long i = 1; i <= 999999; i++) 
    {
        if (chk(i)) 
            r.push_back(i);
    }
 
    int t;
    cin >> t;
    while (t--) 
    {
        long long n;
        cin >> n;
 
        long long ans = 0;
        for (int i = 0; i < r.size(); i++) 
        {
            if (r[i] <= n) 
                ans++;
            else
                break;
        }
        cout << ans << "
";
    }
    return 0;
}