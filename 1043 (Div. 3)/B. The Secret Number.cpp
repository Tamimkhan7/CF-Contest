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
        ll n;
        cin >> n;
        vector<ll> ans;

        for (int k = 1; k <= 18; k++)
        {
            ll d = 1;
            for (int i = 0; i < k; i++)
                d *= 10;
            ll div = 1 + d;
            show(div);
            if (n % div == 0)
            {
                ll x = n / div;
                show(x);
                ans.push_back(x);
            }
        }

        if (ans.empty())
            cout << 0 << "\n";
        else
        {
            sort(all(ans));
            cout << ans.size() << '\n';
            for (auto v : ans)
                cout << v << ' ';
            cout << "\n";
        }
    }
    return 0;
}