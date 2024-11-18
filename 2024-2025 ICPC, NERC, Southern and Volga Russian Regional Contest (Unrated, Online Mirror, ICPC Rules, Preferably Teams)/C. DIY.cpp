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
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        if (mp[x] % 2 == 0)
            ans.push_back(x), ans.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
    }
    // for (auto x : ans)
    //     cout << x << ' ';
    // cout << '\n';
    sort(all(ans));
    int size = ans.size();
    if (size < 8)
    {
        cout << "NO" << '\n';
        return;
    }
    else
    {
        cout << "YES" << '\n';
        cout << ans[0] << " " << ans[2] << " " << ans[1] << " " << ans[size - 2] << ' ' << ans[size - 3] << ' ' << ans[3] << ' ' << ans[size - 4] << ' ' << ans[size - 1] << '\n';
    }
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