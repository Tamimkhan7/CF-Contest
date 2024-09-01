#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> res(n);
        string s;

        for (int i = 0; i < n; ++i)
            cin >> p[i];

        cin >> s;

        vector<bool> vis(n, false);

        for (int i = 0; i < n; ++i)
        {
            if (vis[i])
                continue;

            vector<int> cy;
            int cur = i;

            while (!vis[cur])
            {
                cy.push_back(cur);
                vis[cur] = true;
                cur = p[cur] - 1;
            }

            int black_count = 0;
            for (int idx : cy)
            {
                if (s[idx] == '0')
                    black_count++;
            }

            for (int idx : cy)
                res[idx] = black_count;
        }

        for (int i = 0; i < n; ++i)
            cout << res[i] << " ";

        cout << '\n';
    }
    return 0;
}
