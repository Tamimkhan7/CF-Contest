#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), vv(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] %= k;
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vv[i];
        mp[vv[i] % k]++;
    }
    if (v == vv)
    {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        int a = x % k, b = abs(x - k);

        if (mp.count(x))
        {
            mp[x]--;
            if (mp[x] == 0)
                mp.erase(x);
        }
        else if (mp.count(a))
        {
            mp[a]--;
            if (mp[a] == 0)
                mp.erase(a);
        }
        else if (mp.count(b))
        {
            mp[b]--;
            if (mp[b] == 0)
                mp.erase(b);
        }
    }
    if (mp.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}