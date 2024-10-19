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
        string s;
        cin >> s;

        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' and s[i + 1] == '1')
                ok = true;
        }

        if (ok || (s[0] == '1' || s[n - 1] == '1'))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}