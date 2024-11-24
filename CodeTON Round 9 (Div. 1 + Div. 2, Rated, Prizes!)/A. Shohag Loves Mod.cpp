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
        vector<int> v;
        int x = 1;
        for (int i = 1; i <= n; i++)
        {
            cout << i * 2 - 1 << ' ';
            // for (int j = x + 1; j < 1e4; j++)
            // {
            //     if (j % (i + 1) == i)
            //     {
            //         v.push_back(j);
            //         x = j;
            //         break;
            //     }
            // }
        }
        // for (auto x : v)
        //     cout << x << ' ';
        cout << '\n';
    }
    return 0;
}