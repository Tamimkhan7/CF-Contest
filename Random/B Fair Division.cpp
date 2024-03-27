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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int sum = 0, sum2 = 0;
        if (  n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
                sum2 += arr[i + 1];
                i++;
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                sum += arr[i];
                sum2 += arr[i + 1];
                sum += arr[i + 2];
                i++;
            }
        }
        // cout << sum << " " << sum2 << endl;
        if (sum == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}