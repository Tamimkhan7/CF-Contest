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
    faster;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int c = 0, m, p, k;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                k = i;
                k += 1;
                m = j;
                m += 1;
                int y = k + m;
                p = v[i] * v[j];
                // cout << v[i] << " ";
                // cout << v[j] << " ";
                if (y == p)
                    c++;
                else
                    continue;
            }
        }
        cout << c << endl;
    }
}