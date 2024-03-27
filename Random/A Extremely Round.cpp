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
    int t;
    cin >> t;
    while (t--)
    {
        int a, c = 0, i;
        cin >> a;
        for (i = 1; i <= a; i++)
        {
            if (i < 100)
            {
                if (i % 10 == 0)
                    c++;
            }
            else if (i >= 100)
            {
                if (i % 100 == 0)
                {
                    c++;
                }
            }
            else if (i >= 1000)
            {
                if (i % 1000 == 0)
                {
                    c++;
                }
            }
            else
            {
                if (i % 100000 == 0)
                {
                    c++;
                }
            }
        }
        cout << c + 9 << endl;
    }
}
