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
        string s;
        cin >> n >> s;

        char x = '0';
        int ans = 0;
        for (auto c : s)
        {
            if (c != x)
            {
                ans += 2;
                x = (x == '0' ? '1' : '0');
            }
            else
                ans++;
        }
        
        int first_mx = 0, last_mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                first_mx++;
            else if (first_mx > 0 and s[i] != '0')
                break;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                last_mx++;
            else if (last_mx > 0 and s[i] != '0')
                break;
        }


        show(first_mx), show(last_mx);
        bool ok = false;
        if (first_mx >= last_mx)
        {
            int idx = 0, pre = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    int cnt = 0;
                    for (int j = i; j < n; j++)
                    {
                        if (s[j] == '0')
                            cnt++;
                        else
                            break;
                        if (cnt > pre)
                        {
                            idx = i;
                            pre = cnt;
                        }
                    }
                }
            }
        }
        else
        {
        }

        int idx2 = 0;
        pre = 0;
        for (int i = sesh + 1; i < n; i++)
        {
            if (s[i] == '0')
            {
                int cnt = 0;
                for (int j = i; j < n; j++)
                {
                    if (s[j] == '0')
                        cnt++;
                    else
                        break;
                    if (cnt > pre)
                    {
                        idx2 = j;
                        pre = cnt;
                    }
                }
            }
        }

        reverse(s.begin() + idx, s.begin() + idx2);

        show(s);

        int ans2 = 0;
        x = '0';
        for (auto c : s)
        {
            if (c != x)
            {
                ans2 += 2;
                x = (x == '0' ? '1' : '0');
            }
            else
                ans2++;
        }

        // cout << min(ans, min(ans3, ans2)) << '\n';

        return 0;
    }
}