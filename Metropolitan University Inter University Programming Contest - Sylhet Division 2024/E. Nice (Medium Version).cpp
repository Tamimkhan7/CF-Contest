#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

vector<ll> val;
int a[] = {7, 3, 57, 3, 27, 3};

void save()
{
    val.clear();
    ll n = -1;
    while (n <= 1e18)
    {
        for (int i = 0; i < 6; i++)
        {
            n += a[i];
            val.push_back(n);
        }
    }
}

void solve()
{
    ll l, r;
    cin >> l >> r;

    for (auto x : val)
    {
        if (x >= l && x <= r)
            cout << x << ' ';
    }
    cout << '\n';
}

int32_t main()
{
    MTK;
    save();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
