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
        for (int i = 1; i <= n - 1; i++)
            cout << '0';

        cout << '1';
        cout << '\n';
    }
}

/*   if (i == 1)
                s += '0';
            else if (i == 2)
                s += '1';
            else if (cnt % 2 != 0)
            {
                if (i + 1 <= n)
                {
                    s += "00";
                    i++;
                }
                else
                    s += '0';
            }
            else if (cnt % 2 == 0)
            {
                if (i + 1 <= n)
                {
                    s += "11";
                    i++;
                }
                else
                    s += '1';
            }*/