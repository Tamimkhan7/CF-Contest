#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    ll mx = 0, ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        mx = max(mx, a[i]);
        if (mx * 2 == sum)
            ans++;
    }
    cout << ans << '\n';
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
