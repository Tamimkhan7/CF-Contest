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

int bigmod(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (1LL * ans * 1LL * a) % mod;
        a = (1LL * a * 1LL * a) % mod;
        b >>= 1;
    }
    return ans;
}
int32_t main()
{
    MTK;

    int n;
    cin >> n;
    vector<int> v(n), vv(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
        cin >> vv[i];

    for (int i = 0; i < n; i++)
        cout << bigmod(2, vv[i]) << '\n';
    return 0;
}