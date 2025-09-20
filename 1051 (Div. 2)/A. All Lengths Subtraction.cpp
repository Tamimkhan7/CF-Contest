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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int it = max_element(all(v)) - v.begin();
    int l = it - 1, r = it + 1;
    int val = n - 1;

    while (val > 0)
    {
        if (l >= 0 and v[l] == val)
            l--, val--;
        else if (r < n and v[r] == val)
            r++, val--;
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
