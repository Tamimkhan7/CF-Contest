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

const int N = 600;
vector<int> v;
void solve()
{
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    int x = 2, ans = 3;

    for (int i = 0; i <= N; i++)
    {
        ans += x;
        v.push_back(ans);
        ans += x;
        v.push_back(ans);
        x++;
    }
}
int32_t main()
{
    MTK;
    solve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << '\n';
    }
    return 0;
}