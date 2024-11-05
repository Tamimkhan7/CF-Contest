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
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        int cnt = 0;
        for (int i = 0; i < min(n, m) / 2; i++)
        {
            string ss;
            for (int j = i; j < m - i - 1; j++)
                ss += s[i][j];
            for (int j = i; j < n - i - 1; j++)
                ss += s[j][m - i - 1];

            for (int j = m - i - 1; j > i; j--)
                ss += s[n - i - 1][j];

            for (int j = n - i - 1; j > i; j--)
                ss += s[j][i];
            ss += ss;
            // cout << ss << '\n';
            for (int i = 0; i < ss.size() / 2; i++)
            {
                if (ss.substr(i, 4) == "1543")
                    cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
