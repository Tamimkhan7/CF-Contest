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
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != '6' and s[i] != '9')
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    while (1)
    {
        int x = n;
        string s = to_string(x);
        if (ok(s))
        {
            cout << s << '\n';
            break;
        }
        n++;
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