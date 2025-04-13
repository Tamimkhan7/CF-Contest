#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;

        int l = 0, r = 0, k = 0;
        vector<pair<char, int>> left, right;

        // show(p), show(s);
        for (int i = 0; i < (int)p.size(); i++)
        {
            if (p[i] == 'L')
            {
                l++;
                if (r != 0)
                    left.push_back({'R', r});
                r = 0;
            }
            else
            {
                r++;
                if (l != 0)
                    left.push_back({'L', l});
                l = 0;
            }
        }
        if (r != 0)
            left.push_back({'R', r});
        if (l != 0)
            left.push_back({'L', l});

        l = 0, r = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == 'L')
            {
                l++;
                if (r != 0)
                    right.push_back({'R', r});
                r = 0;
            }
            else
            {
                r++;
                if (l != 0)
                    right.push_back({'L', l});
                l = 0;
            }
        }
        if (r != 0)
            right.push_back({'R', r});
        if (l != 0)
            right.push_back({'L', l});

        // for (auto [x, y] : left)
        //     cout << x << ' ' << y << '\n';

        // cout << '\n';
        // for (auto [x, y] : right)
        //     cout << x << ' ' << y << '\n';

        bool ok = true;
        for (int i = 0; i < min((int)left.size(), (int)right.size()); i++)
        {
            if (right[i].first == left[i].first and right[i].second >= left[i].second and right[i].second <= (left[i].second * 2))
                continue;
            else
            {
                // show(i);
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}