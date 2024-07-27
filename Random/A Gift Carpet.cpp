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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char s[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> s[i][j];
        }

        bool v = false, x = false, k = false, a = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'v' and v == false)
                {
                    v = true;
                    break;
                }
                if (v == true and s[i][j] == 'i' and x == false)
                {
                    x = true;
                    break;
                }
                if (x == true and s[i][j] == 'k' and k == false)
                {
                    k = true;
                    break;
                }
                if (k == true and s[i][j] == 'a' and a == false)
                {
                    cout << "YES" << '\n';
                    return 0;
                }
            }
        }
        cout << "NO" << '\n';
    }
    return 0;
}