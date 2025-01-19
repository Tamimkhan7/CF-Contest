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

bool ok(vector<vector<int>> &decks, vector<int> &order)
{
    int n = decks.size();
    int m = decks[0].size();
    vector<int> idx(n, 0);
    int topc = -1;

    for (int r = 0; r < m; ++r)
    {
        for (int i = 0; i < n; ++i)
        {
            int cw = order[i];
            while (idx[cw] < m && decks[cw][idx[cw]] <= topc)
            {
                idx[cw]++;
            }
            if (idx[cw] >= m)
                return false;
            topc = decks[cw][idx[cw]++];
        }
    }
    return true;
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> decks(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> decks[i][j];
            sort(decks[i].begin(), decks[i].end());
        }

        vector<int> val(n);
        for (int i = 0; i < n; ++i)
            val[i] = i;

        do
        {
            if (ok(decks, val))
            {
                for (int i = 0; i < n; ++i)
                    cout << val[i] + 1 << " ";
                cout << '\n';
                goto nextTestCase;
            }
        } while (next_permutation(all(val)));

        cout << -1 << '\n';

    nextTestCase:;
    }
    return 0;
}
