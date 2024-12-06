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
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - '0', pos;
            bool ok = false;
            for (int j = i - 1; j >= 0; j--)
            {
                int y = s[j] - '0';
                if (abs(x - y) > 1 and y < x)
                {
                    x--;
                    pos = j;
                    ok = true;
                }
            }
            if (ok)
            {
                s.erase(s.begin() + i);
                for (int k = pos; k < n; k++)
                    s[k + 1] = s[k];
                s[pos] = x;
            }
        }
        cout << s << '\n';
    }
    return 0;
}


