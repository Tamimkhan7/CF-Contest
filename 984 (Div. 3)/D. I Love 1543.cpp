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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> tar = {"1543", "5431", "4315", "3154"};
        vector<vector<char>> a(n + 1, vector<char>(m + 1));

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            string s = "";
            for (int j = i; j <= m - i + 1; j++)
                s += a[i][j];
            for (int j = i + 1; j <= n - i; j++)
                s += a[j][m - i + 1];
            for (int j = m - i + 1; j >= i; j--)
                s += a[n - i + 1][j];
            for (int j = n - i; j > i; j--)
                s += a[j][i];
            // cout << s << '\n';
            string ss = "";
            for (int i = 0; i < 3; i++)
                ss += s[i];

            bool flag = false;
            if (s.size() >= 4)
            {
                for (int k = 0; k <= s.size() - 4; k++)
                {
                    string sub = s.substr(k, 4);
                    if (find(all(tar), sub) != tar.end())
                    {
                        if (k == 0)
                            flag = true;
                        cnt++;
                        k += 3;
                    }
                }
            }
            if (!flag)
                s += ss;
            // cout << s << '\n';

            // reverse(all(s));
            for (int k = (int)s.size() - 5; k <= s.size(); k++)
            {
                string sub = s.substr(k, 4);
                if (find(all(tar), sub) != tar.end())
                {
                    cnt++;
                    k += 3;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
