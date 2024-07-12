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
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int p = 5;
        while (p--)
        {
            int mn = *min_element(all(v));
            for (int i = 0; i < 3; i++)
            {
                if (v[i] == mn)
                {
                    v[i] = mn + 1;
                    break;
                }
            }
        }
        int ans = 1;
        for (int i = 0; i < 3; i++)
            ans *= v[i];
        cout << ans << '\n';
    }
    return 0;
}