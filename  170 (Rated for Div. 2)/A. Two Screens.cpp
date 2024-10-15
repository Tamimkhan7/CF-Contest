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

int ok(string s, string t)
{
    int cur = 0;
    int n = s.size(), m = t.size();
    while (cur < n && cur < m && s[cur] == t[cur])
        cur++;

    if (cur == 0)
        return cur + (n - cur) + (m - cur);
    else
        return cur + 1 + (n - cur) + (m - cur);
}
int32_t main()
{
    MTK;

    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        cout << ok(s, t) << endl;
    }
    return 0;
}
