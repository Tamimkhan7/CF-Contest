#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;

    int n, k, q;
    cin >> n >> k >> q;

    vector<vector<int>> a(n, vector<int>(k));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < k; ++j)
            cin >> a[i][j];
    }

    vector<vector<int>> b(n, vector<int>(k));
    for (int j = 0; j < k; ++j)
    {
        b[0][j] = a[0][j];
        for (int i = 1; i < n; ++i)
            b[i][j] = b[i - 1][j] | a[i][j];
    }

    while (q--)
    {
        int m;
        cin >> m;
        vector<tuple<int, char, int>> req(m);

        for (int i = 0; i < m; ++i)
        {
            int r;
            char o;
            int c;
            cin >> r >> o >> c;
            req[i] = make_tuple(r - 1, o, c);
        }

        vector<int> val(n, 0);
        for (int cur = 0; cur < n; ++cur)
        {
            val[cur] = 1;
            for (const auto &r : req)
            {
                int ind = get<0>(r);
                char op = get<1>(r);
                int value = get<2>(r);

                if ((op == '<' && !(b[cur][ind] < value)) ||
                    (op == '>' && !(b[cur][ind] > value)))
                {
                    val[cur] = 0;
                    break;
                }
            }
        }

        int ans = -1;
        for (int cur = 0; cur < n; ++cur)
        {
            if (val[cur] == 1)
            {
                ans = cur + 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
