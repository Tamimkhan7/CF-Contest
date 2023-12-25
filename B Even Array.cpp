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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n % 2 == 0)
        {
            n = n;
        }
        else
        {
            if (n == 1)
                n = n;
            else
                n -= 1;
        }
        for (int i = 0; i < n; i++)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0 && arr[i + 1] != 0)
            {
                c++;
                i++;
            }
               }
        if (n == 1)
            cout << -1 << endl;
        else
            cout << c << endl;
    }
}
