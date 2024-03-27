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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0 && arr[i + 1] == 0)
            {
                c++;
            }
            else
            {
                if (c >= k)
                {
                    k -= k;
                    k = c;
                    c = 0;

                    continue;
                }
            }
        }

        if (k >= c)
        {
            cout << k + 1 << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}