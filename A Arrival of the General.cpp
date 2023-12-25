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

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int c = 1, k = 0;
    int maxi = arr[1];
    int mini = arr[1];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > maxi)
        {
            c = i;
            maxi = arr[i];
        }
        else if (arr[i] <= mini)
        {
            k = i;
            mini = arr[i];
        }
    }
    // cout << c << " " << k << endl;
    int p = n / 2;
    if (c > p && k <= p)
    {
        int m = abs(1 - c) + n - k;
        cout << m - 1 << endl;
    }
    else
    {
        int m = abs(1 - c) + n - k;
        cout << m << endl;
    }
}