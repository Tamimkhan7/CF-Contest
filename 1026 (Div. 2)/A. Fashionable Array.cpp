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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((v[n - 1] + v[i]) % 2 == 0)
                break;
            else
                cnt++;
        }
        int cnt2 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if ((v[0] + v[i]) % 2 == 0)
                break;
            else
                cnt2++;
        }
        cout << min(cnt, cnt2) << '\n';
    }
    return 0;
}