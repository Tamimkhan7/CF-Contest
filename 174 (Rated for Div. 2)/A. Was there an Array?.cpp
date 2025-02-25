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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 1; i <= n - 2; i++)
            cin >> a[i];
        // for (int i = 1; i <= n - 2; i++)
        //     cout << a[i] << ' ';
        // cout << '\n';
        vector<int> v;
        v.push_back(1);
        if (a[1] == 0)
        {
            v.push_back(2);
        }
        else
            v.push_back(1);
        int x = 1;
        for (int i = 1; i <= n - 2; i++)
        {
            if (a[i] == 0)
            {
                if (v[v.size() - 2] == x)
                {
                    x++;
                    v.push_back(x);
                }
                else
                    v.push_back(x);
            }
            else
            {
                // if (v[v.size() - 2] == x)
                // {
                //     x++;
                //     v.push_back(x);
                // }
                // else
                //     v.push_back(x);
                v.push_back(x);
            }
        }

        bool ok = true;
        for (int i = 1; i <= n - 2; i++)
        {
            if (a[i] == 0)
            {
                if (v[i - 1] != v[i + 1])
                    continue;
                else
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                if (v[i - 1] == v[i + 1])
                    continue;
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
    }
    return 0;
}