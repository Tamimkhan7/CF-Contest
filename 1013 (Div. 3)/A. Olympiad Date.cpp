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
    int zero = 3, one = 1, two = 2, three = 1, five = 1;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        if (zero > 0 and x == 0)
            zero--;
        else if (one > 0 and x == 1)
            one--;
        else if (two > 0 and x == 2)
            two--;
        else if (three > 0 and x == 3)
            three--;
        else if (five > 0 and x == 5)
            five--;
        if (zero == 0 and one == 0 and two == 0 and three == 0 and five == 0)
        {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
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