#include <bits/stdc++.h>
using namespace std;
#define int long long
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    vector<int> res;
 
    for (int i = 0; i < n; i++)
    {
        int l = 1, r = i + 1;
 
        while (l <= r)
        {
            int m = (l + r) / 2;
 
            if (a[i - m + 1] >= m)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        res.push_back(r);
    }
 
    for (auto i : res)
    {
        cout << i << " ";
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
        cout << '
';
    }
}