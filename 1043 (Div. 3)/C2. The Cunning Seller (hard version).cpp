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
const ll mod = 1000000007;

vector<ll> pw;

void pre_cnt()
{
    pw.clear();
    ll v = 1;
    while (v <= (ll)1e18 / 3 && v <= (ll)1e9)
    {
        pw.push_back(v);
        v *= 3;
    }

    if (pw.back() <= (ll)1e18 / 3)
        pw.push_back(pw.back() * 3);
}

static inline ll base3_digit_sum(ll n)
{
    ll s = 0;
    while (n)
    {
        s += n % 3;
        n /= 3;
    }
    return s;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll s = base3_digit_sum(n);
    if (k < s)
    {
        cout << -1 << '\n';
        return;
    }

    ll d = min(n, k);
    if (((n - d) & 1))
        d--;
    ll mg = (n - d) / 2;

    vector<ll> cnt(pw.size() + 2, 0);
    cnt[0] = n;
    ll extra = 0;

    for (size_t i = 0; i < pw.size() && mg > 0; ++i)
    {

        ll can = min(mg, cnt[i] / 3);
        if (can > 0)
        {
            cnt[i] -= 3 * can;
            cnt[i + 1] += can;
            extra += can * pw[i];
            mg -= can;
        }
    }

    ll ans = 3 * n + extra;
    cout << ans << '\n';
}

int32_t main()
{
    MTK;
    pre_cnt();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
