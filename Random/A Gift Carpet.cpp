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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, ss;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            ss += s;
        }
        bool flag = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            for (int j = 0; j < m; j++)
            {
                char c = s[i * m];
                if (i == 0 and c == 'v')
                {
                    ok = true;
                    break;
                }
                else if (i == 1 and c == 'i')
                {
                    ok = true;
                    break;
                }
                else if (i == 2 and c == 'k')
                {
                    ok = true;
                    break;
                }
                else if (i == 3 and c == 'a')
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
                cnt++;
            if (!ok)
                flag = false;
        }
        cout << cnt << ' ';
        cout << '\n';
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}