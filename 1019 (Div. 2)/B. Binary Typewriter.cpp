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

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<pair<char, int>> v;
    int cnt = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (cnt2 > 0)
                v.push_back({'1', cnt2});
            cnt2 = 0;
            cnt++;
        }
        else
        {
            if (cnt > 0)
                v.push_back({'0', cnt});
            cnt = 0;
            cnt2++;
        }
    }
    if (cnt > 0)
        v.push_back({'0', cnt});
    if (cnt2 > 0)
        v.push_back({'1', cnt2});
    int idx = 0, mx_val = 0;
    char ch;
    for (int i = 0; i < (int)v.size(); i++)
    {
        int x = v[i].second;
        if (x > mx_val)
        {
            mx_val = x;
            ch = v[i].first;
            idx = i;
        }
    }
    // for (auto [x, y] : v)
    //     cout << x << ' ' << y << '\n';
    // cout << '\n';

    // show(mx_val), show(idx);
    //cout << '\n';
    int idx2 = -1, mx_val2 = 0;
    for (int i = idx - 1; i >= 0; i--)
    {
        if (v[i].first == ch and mx_val2 < v[i].second)
        {
            mx_val2 = v[i].second;
            idx2 = i;
        }
    }
    for (int i = idx + 1; i < (int)v.size(); i++)
    {
        if (v[i].first == ch and mx_val2 < v[i].second)
        {
            mx_val2 = v[i].second;
            idx2 = i;
        }
    }
    // show(mx_val2), show(idx2);
    int idx_a = idx, idx_b = idx2;
    bool ok = true;
    if (idx < idx2 and idx2 > -1)
    {
        idx++;
        swap(v[idx], v[idx2]);
    }
    if (idx > idx2 and idx2 > -1)
    {
        idx--;
        swap(v[idx], v[idx2]);
    }
    else
        ok = false;

    // for (auto [x, y] : v)
    //     cout << x << ' ' << y << '\n';
    // cout << '\n';

    int ans = 0, ans2 = 0;
    ch = '0';
    for (auto [x, y] : v)
    {
        if (x == ch)
            ans += y;
        else
        {
            ans += (y + 1);
            ch = x;
        }
    }
    if (!ok)
    {
        reverse(all(v));
        ch = '0';
        for (auto [x, y] : v)
        {
            if (x == ch)
                ans2 += y;
            else
            {
                ans2 += (y + 1);
                ch = x;
            }
        }
        cout << min(ans, ans2) << '\n';
        return;
    }

    if (idx_a < idx_b and idx_b > -1)
    {
        idx_a--;
        swap(v[idx_a], v[idx_b]);
    }
    if (idx_a > idx_b and idx_b > -1)
    {
        idx_a++;
        swap(v[idx_a], v[idx_b]);
    }

    int ans3 = 0;
    ch = '0';
    for (auto [x, y] : v)
    {
        if (x == ch)
            ans3 += y;
        else
        {
            ans3 += (y + 1);
            ch = x;
        }
    }
    cout << min(ans, ans3) << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}