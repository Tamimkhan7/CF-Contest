#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << (n / 2) << '\n';
    else
        cout << n / 2 + 1 << '\n';
}

int main()
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
