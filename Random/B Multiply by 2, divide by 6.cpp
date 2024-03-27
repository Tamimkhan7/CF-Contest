#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    ll t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                c++;
                n /= 6;
            }
            else
            {
                c++;
                n *= 2;
                if (n % 6 == 0)
                {
                    c++;
                    n /= 6;
                }
                else
                {
                    break;
                }
            }
        }
        // cout << n << endl;
        if (n == 0 || n == 1)
            cout << c << endl;
        else
            cout << -1 << endl;
    }
}
