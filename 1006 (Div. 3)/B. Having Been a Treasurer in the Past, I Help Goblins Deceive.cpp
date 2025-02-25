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

        ll cnt_desh = 0, cnt_un = 0;
        for (char c : s)
        {
            if (c == '-')
                cnt_desh++;
            else
                cnt_un++;
        }

        if (cnt_desh < 2 || cnt_un == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            ll left = cnt_desh / 2;
            ll right = cnt_desh - left;
            cout << left * cnt_un * right << '\n';
        }
    }
    return 0;
}
