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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        for (int l = 2, r = n - 1; l < r; l++, r--)
        {
            if (v[l] == v[l - 1] || v[r] == v[r + 1])
                swap(v[l], v[r]);
        }
        int cnt = 0;
        for (int j = 1; j < n; j++)
        {
            if (v[j] == v[j + 1])
                cnt++;
            // cout << v[j] << ' ';
        }
        // cout << '\n';
        cout << cnt << '\n';
    }
    return 0;
}