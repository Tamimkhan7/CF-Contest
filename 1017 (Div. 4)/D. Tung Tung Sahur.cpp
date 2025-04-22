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

        vector<pair<char, int>> v, vv;
        int cnt = 0, cnt2 = 0;
        for (int i = 0; i < (int)p.size(); i++)
        {
            if (p[i] == 'R')
            {
                if (cnt2 > 0)
                    v.push_back({'L', cnt2});
                cnt2 = 0;
                cnt++;
            }
            else
            {
                if (cnt > 0)
                    v.push_back({'R', cnt});
                cnt = 0;
                cnt2++;
            }
        }
        if (cnt > 0)
            v.push_back({'R', cnt});
        if (cnt2 > 0)
            v.push_back({'L', cnt2});

        cnt = 0, cnt2 = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == 'R')
            {
                if (cnt2 > 0)
                    vv.push_back({'L', cnt2});
                cnt2 = 0;
                cnt++;
            }
            else
            {
                if (cnt > 0)
                    vv.push_back({'R', cnt});
                cnt = 0;
                cnt2++;
            }
        }
        if (cnt > 0)
            vv.push_back({'R', cnt});
        if (cnt2 > 0)
            vv.push_back({'L', cnt2});

        // for (auto [x, y] : v)
        //     cout << x << ' ' << y << '\n';
        // cout << '\n';
        // for (auto [x, y] : vv)
        //     cout << x << ' ' << y << '\n';

        bool ok = true;
        if (vv.size() != v.size())
        {
            cout << "NO\n";
            continue;
        }
        // cout << "abc\n";
        for (int i = 0; i < (int)v.size(); i++)
        {
            char v_a = v[i].first, vv_a = vv[i].first;
            int v_b = v[i].second, vv_b = vv[i].second;
            // show(v_a), show(vv_a), show(v_b), show(vv_b);
            if (v_a == vv_a and (v_b <= vv_b and v_b * 2 >= vv_b))
                continue;
            else
            {
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