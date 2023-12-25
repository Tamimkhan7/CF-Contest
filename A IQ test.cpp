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
    faster;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k = 0, c = 0, p, q;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            c++;
            p = i;
        }
        else
        {
            k++;
            q = i;
        }
    }
    // cout << p << " " << q << " " << endl;
    for (int i = 0; i < n; i++)
    {
        if (c > k)
        {
            cout << q + 1 << endl;
            break;
        }
        else
        {
            cout << p + 1 << endl;
            break;
        }
    }
}
