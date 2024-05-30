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
    string s;
    cin >> n >> s;
    int word = 0, digit = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            word++;
        else if (s[i] > '0' and s[i] <= '9')
        {
            if (word > 0)
            {
                cout << "NO" << '\n';
                return;
                digit++;
            }
        }
    }
    int ans = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        char x = s[i] - '0';
        int p = int(x);
        // cout << p << ' ';
        if (p >= ans)
            ans = p;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
    // cout << ans << ' ' << digit << '\n';
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