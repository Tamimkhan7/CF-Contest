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
    int n, s;
    cin >> n >> s;
    map<char, int> mp;
    for (int i = 1; i < n; i++)
    {
        char c = s[i];
        mp[c]++;
        if (mp[c] > 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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