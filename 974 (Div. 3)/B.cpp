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
ll sum(ll a, ll b)
{
    return (b * (b + 1)) / 2 - ((a - 1) * a) / 2;
}

int32_t main()
{
    MTK;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll st = max(1LL, n - k + 1);
        ll total_leaves = sum(st, n);

        if (total_leaves % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
