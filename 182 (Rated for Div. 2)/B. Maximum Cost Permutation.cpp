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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> vis(n + 1, false);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        vis[v[i]] = true;
    }
    vector<int> temp;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            temp.push_back(i);
    }
    sort(all(temp));
    reverse(all(temp));
    int x = 0, y = temp.size() - 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            if (temp[x] != (i + 1))
                v[i] = temp[x++];
            else
                v[i] = temp[y--];
        }
    }

    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != (i + 1))
        {
            l = i + 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] != (i + 1))
        {
            r = i + 1;
            break;
        }
    }
    if (l != -1 and r != -1 and l < r)
        cout << r - l + 1 << '\n';
    else
        cout << 0 << '\n';
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}