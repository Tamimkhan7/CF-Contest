#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
int main()
{
    int n, m, sum = 0, sum2 = 0, sum3 = 0;
    cin >> n >> m;
    if (n > m)
    {
        swap(n, m);
        for (int i = n; i <= m; i++)
        {
            sum += i;
            if (i % 2 == 0)
            {
                sum2 += i;
            }
            else
            {
                sum3 += i;
            }
        }
    }
    else if (n == m)
    {
        for (int i = n; i <= m; i++)
        {
            sum += i;

            if (i % 2 == 0)
            {
                sum2 += i;
            }
            else
            {
                sum3 += i;
            }
        }
        sum *= 2;
        sum2 *= 2;
        sum3 *= 2;
    }
    else
    {
        for (int i = n; i <= m; i++)
        {
            sum += i;
            if (i % 2 == 0)
            {
                sum2 += i;
            }
            else
            {
                sum3 += i;
            }
        }
    }
    cout << sum << endl
         << sum2 << endl
         << sum3 << endl;
}