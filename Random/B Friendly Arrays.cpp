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
#define St (v.begin(), v.end())
#define rc ((n * 2) + 1)

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int total_or = 0;
        for (int i = 0; i < m; i++)
        {
            total_or |= b[i];
        }
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            ans1 ^= a[i];
            ans2 ^= a[i] | total_or; // first kaj korbe or then xor kaj korbe
        }
        cout << min(ans1, ans2) << ' ' << max(ans1, ans2) << '\n';
    }
    return 0;
}