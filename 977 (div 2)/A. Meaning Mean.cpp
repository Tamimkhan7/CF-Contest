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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
        while (v.size() > 1)
        {
            int x = v[0];
            v.erase(v.begin());
            int y = v[0];
            v.erase(v.begin());
            v.push_back((x + y) / 2);
            sort(all(v));
        }
        cout << v[0] << '\n';
    }
    return 0;
}