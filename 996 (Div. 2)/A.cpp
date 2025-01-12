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
        int n, a, b;
        cin >> n >> a >> b;
        int a_cnt = 0, b_cnt = 0;
        if (a < b)
        {
            while ((b - a) > 1)
            {
                if ((b - a) > 1)
                    a_cnt++, a++;
                if ((b - a) > 1)
                    b_cnt++, b--;
            }
        }
        else
        {
            while ((a - b) > 1)
            {
                if ((a - b) > 1)
                    a_cnt++, a--;
                if ((a - b) > 1)
                    b_cnt++, b++;
            }
        }
        // show(a_cnt), show(b_cnt);
        if (a_cnt > b_cnt)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}