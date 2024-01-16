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
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, a1, b1, c1, d1;
        cin >> a >> b >> c >> d >> a1 >> b1 >> c1 >> d1;
        vector<int> v;
        int ans = abs(c - a);
        int ans2 = abs(d - b);
        int ans3 = abs(c1 - a1);
        int ans4 = abs(d1 - b1);
        v.push_back(ans);
        v.push_back(ans2);
        v.push_back(ans3);
        v.push_back(ans4);

        int flag = 0;
        for (int i = 0; i < 4; i++)
        {
            if (v[i] == v[i + 1])
                flag++;
        }
        if (flag == 3)
            cout << v[0] * v[0] << '\n';
        else
        {
            int mx = *max_element(v.begin(), v.end());
            cout << mx * mx << '\n';
        }
    }
}