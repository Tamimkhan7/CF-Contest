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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int x = n / k, y = n % k;
    if (n < k)
    {
        cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < k; i++)
        v.push_back(x);
    while (y != 0)
    {
        for (int i = 0; i < k; i++)
        {
            if (y > 0)
            {
                v[i]++;
                y--;
            }
            else
                break;
        }
    }

    int even = 0, odd = 0;
    vector<int> even_element, odd_element;
    for (auto x : v)
    {
        if (x % 2 == 0 and x > 0)
        {
            even++;
            even_element.push_back(x);
        }
        else if (x % 2 != 0 and x > 0)
        {
            odd++;
            odd_element.push_back(x);
        }
    }
    if (odd == even)
    {
        int ac = even_element[0];
        for (auto x : odd_element)
            cout << x << ' ';
        for (auto x : even_element)
            cout << x  ac << ' ';
        cout << '\n';
    }
    if ((odd > 0 and even == 0) || (odd == 0 and even > 0))
    {
        cout << "YES" << '\n';
        for (auto x : v)
            cout << x << ' ';
        cout << '\n';
        return;
    }
    int ans = 0;
    if (even_element.size() > odd_element.size())
    {
        for (int i = 0; i < even_element.size(); i++)
        {
            ans++;
            even_element[i]--;
        }
        while (ans != 0)
        {
            for (int i = 0; i < odd_element.size(); i++)
            {
                if (ans > 0)
                {
                    ans--;
                    odd_element[i]++;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < odd_element.size(); i++)
        {
            if (odd_element[i] > 1)
            {
                ans++;
                odd_element[i]--;
            }
        }
        while (ans != 0)
        {
            for (int i = 0; i < even_element.size(); i++)
            {
                if (ans > 0)
                {
                    ans--;
                    even_element[i]++;
                }
            }
        }
    }
    for (auto x : even_element)
        cout << x << ' ';
    cout << '\n';
    vector<int> ans_result;
    for (int i = 0; i < odd_element.size(); i++)
        ans_result.push_back(odd_element[i]);
    for (int i = 0; i < even_element.size(); i++)
        ans_result.push_back(even_element[i]);
    int even_cnt = 0, odd_cnt = 0;
    for (int i = 0; i < ans_result.size(); i++)
    {
        if (ans_result[i] % 2 == 0)
            even_cnt++;
        else
            odd_cnt++;
    }
    if ((odd_cnt > 0 and even_cnt == 0) || (odd_cnt == 0 and even_cnt > 0))
    {
        cout << "YES" << '\n';
        for (int i = 0; i < ans_result.size(); i++)
            cout << ans_result[i] << ' ';
        cout << '\n';
    }
    else
        cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}