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

bool ok(string s)
{
    int n = s.size();
    set<string> se;
    for (int i = 0; i < n; i++)
    {
        string ss = "";
        for (int j = i; j < n; j++)
        {
            ss += s[j];
            se.insert(ss);
        }
    }
    if (se.size() % 2 == 0)
        return true;
    else
        return false;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        string ss = "";
        for (int j = i; j < min(n, 5 + i); j++)
        {
            ss += s[j];
            if (ok(ss))
            {
                cout << ss << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
