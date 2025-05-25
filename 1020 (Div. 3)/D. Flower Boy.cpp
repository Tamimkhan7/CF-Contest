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

int solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < m; ++i)
        cin >> b[i];

    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (a[i] >= b[j])
            j++;
        i++;
    }
    if (j == m)
        return 0;

    vector<int> pre(m, -1);
    vector<int> suff(m, -1);

    i = 0, j = 0;
    while (j < m and i < n)
    {
        if (a[i] >= b[j])
        {
            pre[j] = i;
            j++;
        }
        i++;
    }

    i = n - 1, j = m - 1;
    while (j >= 0 and i >= 0)
    {
        if (a[i] >= b[j])
        {
            suff[j] = i;
            j--;
        }
        i--;
    }

    int ans = -1;
    for (int x = 0; x < m; ++x)
    {
        bool l = (x == 0) || (pre[x - 1] != -1);
        bool r = (x == m - 1) || (suff[x + 1] != -1);
        if (l and r)
        {
            bool pos_ok;
            if (x == 0)
                pos_ok = (m == 1) || (suff[x + 1] >= 0);
            else if (x == m - 1)
                pos_ok = (pre[x - 1] != -1);
            else
                pos_ok = (pre[x - 1] < suff[x + 1]);
            if (pos_ok)
            {
                if (ans == -1 || b[x] < ans)
                    ans = b[x];
            }
        }
    }

    return ans;
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        cout << solve() << "\n";

    return 0;
}