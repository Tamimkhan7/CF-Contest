#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n, m;
    string a, b;
    cin >> n >> m >> a >> b;

    vector<string> v;

    for (ll mask = 0; mask < (1LL << m); mask++)
    {
        string subseq = "";
        for (int i = 0; i < m; i++)
        {
            if ((mask >> i) & 1)
                subseq += b[i];
        }
        v.push_back(subseq);
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string prefix = a.substr(0, i + 1);
        if (find(v.begin(), v.end(), prefix) != v.end())
            ans = i + 1;
    }
    cout << ans << '\n';
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
