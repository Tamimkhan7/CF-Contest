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

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    if (n <= 60 and (k >= (1LL << (n - 1))))
    {
        cout << -1 << '\n';
        return;
    }

    vector<int> v(n);
    int l = 0, r = n - 1;
    for (int i = 1; i < n; i++)
    {
        if (n - 1 - i > 60 || k < (1LL << (n - 1 - i)))
            v[l++] = i;
        else
        {
            v[r--] = i;
            k -= (1LL << (n - 1 - i));
        }
    }
    v[l] = n;
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}