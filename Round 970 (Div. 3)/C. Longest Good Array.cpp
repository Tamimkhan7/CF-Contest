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
        int l, r;
        cin >> l >> r;
        vector<int> v;
        v.push_back(l);
        v.push_back(l + 1);
        int i = 1;
        l += 1;
        while (l <= r)
        {
            int x = v[i] - v[i - 1];
            int y = v[i] + (x + 1);
            l = y;
            v.push_back(y);
            i++;
        }
        v.pop_back();
        cout << v.size() << '\n';
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
    }
    return 0;
}