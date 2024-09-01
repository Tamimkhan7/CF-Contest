#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
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

        int even = 0, odd = 0;
        char a = s[0], b = s[1];
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != a)
            {
                a = s[i];
                even++;
            }
        }
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != b)
            {
                b = s[i];
                odd++;
            }
        }

        int ans = min(even, odd);
        cout << ans << '\n';
    }

    return 0;
}
