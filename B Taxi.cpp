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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    int c = 0, k = 0, p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            c++;
        }
        else if (arr[i] == 2)
        {
            k++;
        }
        else if (arr[i] == 3)
        {
            p++;
        }
        else
        {
            q++;
        }
    }
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
            z++;
    }
    // cout << z << endl;
    int u = 0, w = 0, v = 0, y = 0, x = 0, t;
    while (z > 0)
    {
        if (p > 0 && c > 0)
        {
            t = c * 1 + p * 3;
            if (t > 0)
            {
                u++;
                t -= 4;
            }
        }
        else if (c > 0 && k > 0)
        {
            t = k * 2 + c * 1;
            if (t > 0)
            {
                w++;
                t -= 3;
            }
        }
        else if (p > 0)
        {
            t = p * 3;
            if (t > 0)
            {
                v++;
                t -= 3;
            }
        }
        else if (k > 0)
        {
            t = k * 2;
            if (t > 0)
            {
                y++;
                t -= 4;
            }
        }
        else if (c > 0)
        {
            t = c * 1;
            if (t > 0)
            {
                x++;
                t -= 4;
            }
        }
        z--;
    }
    cout << u << " " << w << " " << v << " " << y << " " << x << endl;
    int b = x + y + v + w + u;
    // cout << b << endl;
}
