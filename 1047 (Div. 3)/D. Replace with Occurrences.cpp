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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    unordered_map<int, vector<int>> pos;
    for (int i = 0; i < n; i++)
        pos[b[i]].push_back(i);

    vector<int> a(n);
    int curr = 1;

    for (auto [val, idx] : pos)
    {
        int sz = idx.size();
        if (sz % val != 0)
        {
            cout << -1 << '\n';
            return;
        }

        for (int i = 0; i < sz; i++)
        {
            show(curr);
            show(val);
            a[idx[i]] = curr;
            if ((i + 1) % val == 0)
                curr++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
