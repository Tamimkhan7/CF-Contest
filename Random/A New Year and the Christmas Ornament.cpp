#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    int a, b, c, sum;
    cin >> a >> b >> c;
    int mini = min({a, b, c});
    int p = b - a;
    int r = c - a;
    // cout << r << endl;
    if (mini == b && mini < c)
    {
        sum = (b - 1) + b + b + 1;
    }
    else if (mini == c)
    {
        sum = (c - 2) + (c - 1) + c;
    }
    else if (mini = a && p > 0 && r > 1)
    {
        sum = a + (a + 1) + (a + 2);
    }
    else
    {
        sum = a + (a - 1) + (a + 1);
    }
    cout << sum << endl;
    return 0;
}