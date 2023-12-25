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
    int n, i, j, len;
    cin >> n;
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "YES" << endl;
            len += arr[i];
            int sum = 0, res = 0;
            for (j = 1; j <= len; j++)
            {
                if (j % 2 == 0)
                {
                    sum += j;
                    cout << j << " "; // ai line a kicu mistake ace pore korbo
                }
                else
                {
                    for (int x = 1; x <= (len * 2); x++)
                    {
                        if (x % 2 != 0)
                        {
                            res += x;
                            cout << x << " "; // ai line
                            if (sum == res)
                            {
                                break;
                            }
                        }
                    }
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO " << endl;
        }
    }
}
