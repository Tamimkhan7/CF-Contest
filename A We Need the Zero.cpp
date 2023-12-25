#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], ar[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int x;
        int p = *max_element(arr, arr + n);
        // p += 1;
        int sum;
        for (int i = p; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                ar[j] = arr[j] ^ i;
            }
            for (int k = 0; k < n; k++)
            {
                if (k == 0)
                    sum = ar[k];
                else
                    sum ^= ar[k];
            }
            if (sum == 0)
            {
                cout << i << endl;
                break;
            }
        }
        p = 2222;
        if (sum != 0)
        {
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    ar[j] = arr[j] ^ i;
                }
                for (int k = 0; k < n; k++)
                {
                    if (k == 0)
                        sum = ar[k];
                    else
                        sum ^= ar[k];
                }
                if (sum == 0)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
        if (sum != 0)
            cout << -1 << endl;
    }
}