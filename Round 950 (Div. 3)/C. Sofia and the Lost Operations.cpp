#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m;
    cin >> m;
    vector<int> d(m);
    for (int i = 0; i < m; i++)
        cin >> d[i];

    int ans = 1;
    if (find(all(b), d[m - 1]) == b.end())
        ans = 0;
    multiset<int> s(all(d));
    for (int i = 0; i < n; i++)
    {
        if (b[i] != a[i])
        {
            if (s.find(b[i]) == s.end())
                ans = 0;
            s.erase(b[i]);
        }
    }
    if (ans)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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