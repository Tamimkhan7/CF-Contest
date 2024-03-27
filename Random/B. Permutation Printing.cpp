#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    deque<int> odd, even;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }
    if (n % 2 == 0)
    {
        sort(all(even));
        sort(all(odd));
        while ((!even.empty()) || (!odd.empty()))
        {
            cout << even.back() << ' ';
            even.pop_back();
            cout << odd.front() << ' ';
            odd.pop_front();
        }
    }
    else
    {
        vector<int> ans;
        sort(all(even));
        sort(all(odd));
        while ((!even.empty()) || (!odd.empty()))
        {
            if (odd.empty())
                break;
            ans.push_back(odd.back());
            odd.pop_back();
            if (even.empty())
                break;
            ans.push_back(even.back());
            even.pop_back();
        }
        while (!ans.empty())
        {
            cout << ans.back() << ' ';
            ans.pop_back();
        }
    }
    cout << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}