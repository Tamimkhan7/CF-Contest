#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

ll calc(vector<int> v)
{
    if (v.empty()) return 0;
    int m = v.size();
    int mid = m / 2;
    ll ans = 0;
    for (int i = 0; i < m; i++)    
        ans += abs(v[i] - (v[mid] + i - mid));
    
    return ans;
}

int32_t main()
{
    MTK;

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a') a.push_back(i);
            else b.push_back(i);
        }

        ll ans = min(calc(a), calc(b));
        cout << ans << '\n';
    }
    return 0;
}
