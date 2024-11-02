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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x = (v.size() + 1) - (i + 1);
            if (x == v[i])
            {
                // cout << x << ' ' << v[i] << '\n';
                int p = i;
                while (p--)
                    v.push_back(0);
            }
            if (cnt != 0)
            {
                i = -1;
                cnt = 0;
            }
        }
        cout << v.size() << '\n';
    }
    return 0;
}