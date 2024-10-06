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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            cin >> a[i], mp[a[i]]++;
        // for (auto [x, y] : mp)
        //     cout << x << ' ' << y << '\n';
        int mex = 0;
        for (int i = 0;; ++i)
        {
            if (mp[i] == 0)
                break;
            mex++;
            mp[i]--;
            mp[i + k] += mp[i];
            // for (auto [x, y] : mp)
            //     cout << x << ' ' << y << '\n';
            // cout << '\n';
        }
        cout << mex << '\n';
    }
    return 0;
}