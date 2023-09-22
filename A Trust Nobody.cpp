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
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int l = sizeof(arr) / sizeof(int);
            if (arr[i] == 0 && arr[i + 1] == 0)
            {
                cout << 0 << endl;
            }
            else if (arr[i] == arr[i + 1] && l == 1)
            {
                cout << -1 << endl;
                break;
            }
            else if (arr[i] != arr[i + 1])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}