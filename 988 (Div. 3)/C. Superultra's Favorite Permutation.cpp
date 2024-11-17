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
        if (n < 5)
        {
            cout << -1 << '\n';
            continue;
        }

        vector<int> a, b;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1 and i != 5)
                a.push_back(i);
        }
        a.push_back(5);
        a.push_back(4);
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0 and i != 4)
                a.push_back(i);
        }
        for (auto x : a)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
