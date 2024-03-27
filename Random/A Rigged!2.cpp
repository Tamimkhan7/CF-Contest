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
void solve()
{
    int n;
    cin >> n;
    int s, w;
    cin >> s >> w;
    int ss[n - 1], ee[n - 1];
    for (int i = 1; i < n; i++)
    {
        cin >> ss[i] >> ee[i];
    }
    int c = 0;
    s--;
    while (1)
    {
        for (int i = 1; i < n; i++)
        {
            if (s > ss[i] && w > ee[i])
                c++;
        }
        if (c == 0)
        {
            s--;
        }
        else
        {
            cout << s << endl;
            return;
        }
    }

    cout << s << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}