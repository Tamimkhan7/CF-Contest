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
    cin >> n;
    vector<ll> sq;
    for (int i = 1; i <= 225; i++)
        sq.push_back(i * i);

    ll x = 1LL * n * (n + 1) / 2;
    if (find(all(sq), x) != sq.end())
    {
        cout << -1 << '\n';
        return;
    }
    vector<int> left, right;
    int div = ceil(n / 2);
    for (int i = 1; i <= div; i++)
        left.push_back(i);
    for (int i = div + 1; i <= n; i++)
        right.push_back(i);

    // left.push_back(1);
    // left.erase(left.begin());
    vector<int> ans;

    ll pre_sum = 0;
    bool flag = true;
    while (!left.empty() || !right.empty())
    {
        bool ok = false;
        if (!left.empty() and find(all(sq), (pre_sum + left[0])) == sq.end())
        {
            pre_sum += left[0];
            ans.push_back(left[0]);
            left.erase(left.begin());
            ok = true;
        }
        else if (!left.empty() and find(all(sq), (pre_sum + left.back())) == sq.end())
        {
            pre_sum += left.back();
            ans.push_back(left.back());
            left.pop_back();
            ok = true;
        }
        else if (!right.empty())
        {
            if (!right.empty() and find(all(sq), pre_sum + right[0]) == sq.end())
            {
                pre_sum += right[0];
                ans.push_back(right[0]);
                right.erase(right.begin());
                ok = true;
            }
            else if (!right.empty() and find(all(sq), pre_sum + right.back()) == sq.end())
            {
                pre_sum += right.back();
                ans.push_back(right.back());
                right.pop_back();
                ok = true;
            }
        }
        if (!ok)
        {
            flag = false;
            break;
        }
        //show(pre_sum);
    }
    if (!flag)
        cout << -1 << '\n';
    else
    {
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
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