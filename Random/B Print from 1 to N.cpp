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
int res(int n)
{
    for (int i = n; i > 0; i--)
    {
        return i;
    }
}
int main()
{
    faster;
    int n;
    cin >> n;
    int k = res(n);
    for (int i = k; i > 0; i--)
    {
        if (i == 1)
        {
            cout << i;
        }
        else
        {
            cout << i << " ";
        }
    }
    cout << endl;
}