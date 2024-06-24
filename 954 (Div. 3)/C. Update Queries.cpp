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
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    string c;
    cin >> c;
    sort(all(c));
    sort(all(v));
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