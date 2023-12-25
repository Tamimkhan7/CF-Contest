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
#define pb push_back
#define pop pop_back()

int32_t main()
{
    MTK;
    int s, n;
    cin >> s >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= p[i].first)
        {
            cout << "NO" << '\n';
            return 0;
        }
        else
        {
            s += p[i].second;
        }
    }
    cout << "YES" << '\n';
}