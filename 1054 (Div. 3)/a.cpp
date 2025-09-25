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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));
    reverse(all(a));
    // for(auto x:    a)cout<<x<<' ';
    // cout<<'\n';
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int res = 1;
        for (int j = 0; j < n; j++)
            res *= a[j];
        if (res > 0)
        {
            cout << ans << '\n';
            return;
        }
        if (a[i] == -1)
        {
            a[i] = 1;
            ans += 2;
        }
        if (a[i] == 0)
        {
            a[i] = 1;
            ans += 1;
        }
    }
        cout << ans << '\n';   

}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}