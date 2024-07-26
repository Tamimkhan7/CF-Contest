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
const int mod = 1e9 + 7;

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        unordered_map<ll, ll> p;
        ll count = 0;
        ll ans = 0;
        p[0] = 1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count++;
            else
                count--;
            ans = (ans + p[count] * (n - i)) % mod;
            p[count] += (i + 2);
        } 
        cout << ans << '\n';
    }
    return 0;
}