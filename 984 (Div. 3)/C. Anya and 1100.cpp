#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int q;
        cin >> s >> q;
        int n = s.size();
        string target = "1100";
        set<int> pos;

        for (int i = 0; i <= n - 4; ++i)
        {
            if (s.substr(i, 4) == target)
                pos.insert(i);
        }

        while (q--)
        {
            int idx;
            char x;
            cin >> idx >> x;
            s[--idx] = x;

            for (int i = max(0, idx - 3); i <= min(n - 4, idx); ++i)
            {
                if (s.substr(i, 4) == target)
                    pos.insert(i);
                else
                    pos.erase(i);
            }
            for (int i = idx; i <= min(n - 4, idx + 3); ++i)
            {
                if (s.substr(i, 4) == target)
                    pos.insert(i);
                else
                    pos.erase(i);
            }

            if (!pos.empty())
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
