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
        string s;
        cin >> s;
        int open = 0, close = 0, cnt = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == '(')
                open++;
            else
                close++;
            if (open == close)
            {
                open = 0, close = 0;
                cnt++;
            }
        }
        if (cnt > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}