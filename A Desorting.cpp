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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                k++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                c++;
                swap(arr[i], arr[i + 1]);
            }
        }
        if (k != 0)
            cout << 0 << endl;
        else
            cout << c << endl;
    }
}