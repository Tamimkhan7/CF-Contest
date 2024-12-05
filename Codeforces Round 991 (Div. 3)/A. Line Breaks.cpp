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
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];
        int cnt = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x = s[i].size();
            if ((sum + x) <= m)
            {
                cnt++;
                sum += x;
            }
            else
                break;
        }
        cout << cnt << '\n';
    }
    return 0;
}