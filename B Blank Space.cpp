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
typedef long long int ll;
typedef unsigned long long int llu;
void solve(int arr[], int n)
{
    int c = 0, k = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            c++;
            if (k <= c)
            {
                k = c;
            }
        }
        else
        {
            c = 0;
        }
    }
    cout << k << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
}