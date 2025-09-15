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
        vector<ll> a(n);
        ll sum = 0;
        vector<ll> odd;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2)
                odd.push_back(a[i]);
        }

        if (odd.empty())
        {
            cout << 0 << "\n";
            continue;
        }

        if (odd.size() % 2 == 0)
        {

            ll mn = *min_element(odd.begin(), odd.end());
            sum -= mn;
        }

        cout << sum << "\n";
    }
    return 0;
}