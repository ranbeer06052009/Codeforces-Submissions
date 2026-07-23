#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        
        long long ans = n;
        long long l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] != s[r])
                ans -= 2;
            else
                break;
            l++;
            r--;
        }
        cout << ans << "
";
    }
    return 0;
}